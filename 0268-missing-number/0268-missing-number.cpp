class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int n = nums.size(),ans=INT_MIN,i;
        // if(n==1)
        //     return 0;
       
        for(i=0;i<n;i++)
        {
            if(nums[i]!=i)
            {
                ans = i;
                    return ans;
            }
           
        }
        if(ans==INT_MIN)
            return i;
            
        return ans;
    }
};