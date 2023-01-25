class Solution {
public:
//     bool check(string &s1, string &s2)
//     {
        
//     }
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int>mp;
        vector<string> ans;
        int n=s.size(),i=0,j=9;
        // mp.insert({s.substr(0,10),1})
        while(j<n)
        {
          string str = s.substr(i,(j-i+1));
            mp[str]++;
            i++;
            j++;
        }
        
            
     for(auto i:mp)
     {
         if(i.second>1)
             ans.push_back(i.first);
     }
        
        return ans;
        
    }
};