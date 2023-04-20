## GFG

class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
            // Your code here   
        if (n==0)
        {
            return false;
        }
        else if ((n & n-1)==0)
        {
            return true;
        }
        return false;
    }
};
