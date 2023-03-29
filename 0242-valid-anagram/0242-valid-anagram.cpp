class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mps,mpt;
       
        for(int i=0;i<s.size();i++)
        {
            mps[s[i]]++;
            
        }
        
        for(int i=0;i<t.size();i++)
        {
            mpt[t[i]]++;
        }
        if(mps.size()!=mpt.size())
            return false;
      for(int i=0;i<mps.size();i++)
      {
          if(mpt[i]!=mps[i])
              return false;
      }
        return true;
        
    }
};