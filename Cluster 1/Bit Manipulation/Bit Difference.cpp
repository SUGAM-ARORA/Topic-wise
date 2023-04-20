##GFG

//User function Template for C++

class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        int i=0,count =0;
        while(i<32)
        {
            if((a&(1<<i))!=(b&(1<<i)))
            count++;
            i++;
        }
        return count;
    }
};
