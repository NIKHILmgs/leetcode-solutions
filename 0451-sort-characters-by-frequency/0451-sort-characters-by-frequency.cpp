 bool cmp(pair<char, int>& a,pair<char, int>& b)
         {
            if(a.second==b.second)
            return a.first > b.first;
            else
            return a.second > b.second;
         }

class Solution {
public:
    
    string frequencySort(string s) {
       
        
        unordered_map<char,int>mp;
        for(auto i:s)
        {
            mp[i]++;
        }
        
        vector<pair<char,int>>v;
        
        for(auto &i:mp)
        {
            v.push_back(i);
        }
        
        sort(v.begin(),v.end(),cmp);
        
        string ans = "";
     for(auto i:v)
     {
         for(int j=0;j<i.second;j++)
             ans+=i.first;
     }
    return ans;
        
        
    }
};