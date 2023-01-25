class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string>v1;
        for(int i=0;i<strs.size();i++)
        {
            v1.push_back(strs[i]);
            
        }
        
         for(int i=0;i<strs.size();i++)
        {
           sort(v1[i].begin(),v1[i].end());
             // cout<<v1[i]<<" ";
            
        }
        unordered_map<string,vector<string>>mp;
        for(int i=0;i<v1.size();i++)
        {
            mp[v1[i]].push_back(strs[i]);
        }
        vector<vector<string>>v;
        for(auto i:mp)
        {
            v.push_back(i.second);
        }
        
        return v;
        
        
        
        
    }
};