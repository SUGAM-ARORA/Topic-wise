##GFG
class Solution{
	public:
		vector<string> AllPossibleStrings(string s)
		{
		    // Code here
		    vector<string>ans;
		    int n=pow(2,s.length());
		    for(int i=1;i<n;i++)
		    {
		        int x=i;
		        int j=0;
		        string str="";
		        while(x)
		        {
		            if(x&1)
		            {
		                str=str+s[j];
		            }
		            x=x>>1;
		            j++;
		        }
		        ans.push_back(str);
		    }
		    sort(ans.begin(),ans.end());
		    return ans;
		}
};
