##GFG


class Solution
{
public:
    int setBit(int N)
    {
        // Write Your Code here
        if(N & N+1){
            return (N | N+1);
        }
        else{
            return N;
        }
    }
};
