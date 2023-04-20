class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        int res=0;
        while(N)
        {
            res++;
            N=N&(N-1);
        }
        return res;
    }
};
