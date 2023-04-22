##GFG

//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)
    {
        vector<long long int> ans;
        int res = 0;
        for(int i=0; i<N; i++)
        {
            res ^= Arr[i];
        }
        int mask = (res & (-res));
        int num1 = 0, num2 = 0;
        for(int j=0; j<N; j++)
        {
            if(Arr[j]&mask)
            {
                num1 ^= Arr[j];
            }
            else
            {
                num2 ^= Arr[j];
            }
        }
        if(num1>=num2)
        {
            ans.push_back(num1);
            ans.push_back(num2);
        }
        else
        {
            ans.push_back(num2);
            ans.push_back(num1);
        }
        return ans;
    }
};
