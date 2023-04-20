
##GFG 
vector<int> singleNumber(vector<int> nums) 
    {
        int xor_val=0;
        int m=nums.size();
        for(int i=0;i<m;i++)
        xor_val^=nums[i];
        xor_val=log2((xor_val&~(xor_val-1)));
        
        int set1=0; 
        int set2=0; 
        for(int i=0;i<m;i++){
            if(nums[i]&(1<<xor_val))
            set1^=nums[i];
            else set2^=nums[i];
        }
        if(set1<set2)
        return {set1,set2};
        return {set2,set1};
    }
