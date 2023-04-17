class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        unordered_map<int,int>mp;
        int mx = *max_element(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]=i;
        int idx = mp[mx];
        
        for(auto i:mp)
        {
             if(2*i.first>mx and i.first!=mx)
                 return -1;
           
        }
        return idx;
        
    }
};