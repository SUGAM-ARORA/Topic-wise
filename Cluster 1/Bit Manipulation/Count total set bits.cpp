##GFG

Logic  :   First select a bit and find how many times bit is set. You can see there is a pattern, after every (1 <<  (i + 1))  cycle repeats.
           Final expression will be: (n / (1 << (i + 1)) * (1 << i) + max(0, (n %(1 << (i + 1)) - (1 << i) + 1).

int countSetBits(int n)
    {
        // Your logic here
        int ans = 0; 
        for(int i = 0; i < 31; i++) {
            
            int x = 1ll << i; 
            int y = max(0ll, (n % (2 * x)) - x + 1ll); 
            int z = (n / (2 * x)) * x;
            ans += (n / (2 * x)) * x + y; 
        }
        return ans; 
    }
};
