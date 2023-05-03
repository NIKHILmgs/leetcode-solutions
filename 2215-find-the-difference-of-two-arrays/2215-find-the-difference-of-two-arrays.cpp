class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp1,mp2;
        unordered_set<int>s1,s2;
        s1.insert(nums1.begin(),nums1.end());
        s2.insert(nums2.begin(),nums2.end());
        for(auto i:s1)
            mp1[i]++;
        for(auto i:s2)
            mp2[i]++;
        vector<vector<int>>ans;
        vector<int>v;
        for(auto i:s1)
        {
            if(!mp2.count(i))
                v.push_back(i);
        }
        ans.push_back(v);
        v.clear();
         for(auto i:s2)
        {
            if(!mp1.count(i))
                v.push_back(i);
        }
        ans.push_back(v);
        
            
            return ans;
        
    }
};