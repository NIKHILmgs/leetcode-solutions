class Solution {
public:
//     1st approach TLE
        
//     bool equal(unordered_map<char,int>&mp1,unordered_map<char,int>&mp2)
//     {
//         if(mp1.size()!=mp2.size())
//             return false;
        
//         else {
//             for(auto i:mp1)
//             {
//                 if(i.second!=mp2[i.first])
//                     return false;
//             }
//         }
//         return true;
//     }
//     vector<int> findAnagrams(string s, string p) {
//         vector<int>ans;
//         unordered_map<char,int>mp1,mp2;
//         for(char i:p)
//             mp1[i]++;
//         int n = p.size();
//         for(int i=0;i<s.size();i++)
//         {
//             string s1 = s.substr(i,n);
//             for(char j:s1)
//             {
//                 // cout<<j<<" "<<endl;
//                 mp2[j]++; 
//             }
                
//             if(equal(mp1,mp2))
//                 ans.push_back(i);
//             mp2.clear();
//         }
//         return ans;
         vector<int> findAnagrams(string s, string p) {
             if(p.size()>s.size())
                 return {};
             vector<int>sf(26,0),pf(26,0),ans;
             int j=-1,i=0;
             for(int i=0;i<p.length();i++)
             {
                 j++;
                 sf[s[i]-'a']++;
                 pf[p[i]-'a']++;
             }
             while(j<s.size())
             {
                 if(sf==pf)
                     ans.push_back(i);
                 sf[s[i]-'a']--;
                 i++,j++;
                 if(j<s.size())
                     sf[s[j]-'a']++;
             }
             return ans;
    }
};