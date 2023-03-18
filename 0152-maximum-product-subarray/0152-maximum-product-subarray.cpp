class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i=0,j = nums.size()-1, mx1=INT_MIN,mx2=INT_MIN,k=1;
        for(i=0;i<nums.size();i++)
        {
            k*=nums[i];
            mx1 = max(mx1,k);
            if(k==0)
                k=1;
            
        }
        k=1;
        for(int j=nums.size()-1;j>=0;j--)
        {
            k*=nums[j];
            mx2 = max(mx2,k);
            if(k==0)
                k=1;
            
        }
        return max(mx1,mx2);
        
    }
};