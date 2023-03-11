
class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
        
        int n=nums.size();
        int ans=0;
        for (int i = 0; i < n; i++) {
           int curr_lcm = nums[i];
             if(curr_lcm==k)
                    ans++;
            for (int j = i+1; j < n; j++) {
                curr_lcm = lcm(curr_lcm,nums[j]);
                if(curr_lcm==k)
                    ans++;
                else if(curr_lcm>k)
                    break;
            }
        }
        return ans;
        
        
    }
};