class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
         long long c=0,i=0,n = nums.size(),ans=0;
        while(i<n)
        {
            if(nums[i]==0)
            {
                while(i<n and nums[i]==0)
                {
                    i++;
                    c++;
                }
                ans+=((c*(c+1)/2));
                c=0;
            }
            i++;
        }
        
        
            return ans;
        
    }
};