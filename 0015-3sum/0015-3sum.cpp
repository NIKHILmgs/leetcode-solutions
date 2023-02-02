class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<nums.size();i++)
        {
            if(i>0 and nums[i-1]==nums[i])
                continue;
           
            int a = 0-nums[i];
            int j=i+1,k=nums.size()-1;
            while(j<k)
            {
                int b = nums[j]+nums[k];
                if(b==a)
                {
                     ans.push_back({nums[i],nums[j],nums[k]});
                  
                        while(j<k and nums[k]==nums[k-1])
                        k--;
        
                        while(j<k and nums[j]==nums[j+1])
                        j++;
                    
                    j++;
                    k--;
                    
                }
                   
                else if(a>b)
                 j++;
                
                else if(a<b)
                    k--;
            
            }
        }
        return ans;
        
        
    }
};