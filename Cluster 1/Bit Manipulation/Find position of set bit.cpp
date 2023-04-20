##GFG

class Solution {
  public:
    int findPosition(int N) {
        // code here
        int res= -1;
        int count =0;
        int a=1;
        while(N)
        {
            if(N&1)
            {
                res=a;
                count++;
            }
            N>>=1;
            a++;
        }
        if(count>1)
        {
            return -1;
        }
        return res;
    }
};
