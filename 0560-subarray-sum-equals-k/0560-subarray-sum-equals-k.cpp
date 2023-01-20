class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
         unordered_map<int,int> mp;
         int s=0;
        int ans=0;
        mp.insert({0,1});
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i];
            if(mp.find(s-k)!=mp.end()){
                ans+=mp[s-k];
            }
        mp[s]++;
        }
//         int ans=0,s=0;
        
//         for(int i=0;i<nums.size();i++)
//         {
//              s=nums[i];
//                 if(s==k)
//                     ans++;
//             for(int j=i+1;j<nums.size();j++)
//             {
//               s+=nums[j];
//                 if(s==k)
//                     ans++;
//             }
//         }
        return ans;
    }
};