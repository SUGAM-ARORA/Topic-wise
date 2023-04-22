##GFG
// User function Template for C++

class Solution {
  public:
   int find(int num)
   {
      if(num%4==0) 
      return num;
      if(num%4==1) 
      return 1;
      if(num%4==2) 
      return num+1;
      if(num%4==3) 
      return 0;
  }
    int findXOR(int l, int r) 
    {
        // complete the function here
      int x=find(l-1);
      int y=find(r);
      return x^y;
    }
};
