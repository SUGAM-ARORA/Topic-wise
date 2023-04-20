## GFG

class Solution {
  public:
    void bitManipulation(int num, int i) {
        // your code here
        int a=0,b=0,c=0;
        int res=(1<<(i-1));
        if(num & res)
        a=1;
        b=(num | res);
        c=(num & (~res));
    cout<<a<<" "<<b<<" "<<c;
    }
};

