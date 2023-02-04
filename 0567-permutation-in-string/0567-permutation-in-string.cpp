class Solution {
public:
    bool check(map<char,int>&mp1,map<char,int>&mp2)
    {
        if(mp1.size()!=mp2.size())
            return false;
      for(auto i:mp1)
      {
          if(i.second!=mp2[i.first])
              return false;
       }
        return true;
    }
    
    
    void use(string &s, map<char,int>&mp)
    {
         for(char i:s)
            mp[i]++;
    }
    
    bool checkInclusion(string s1, string s2) {
        map<char,int>mp1,mp2;
        
        for(char i:s1)
        {
            cout<<i<<" ";
            mp1[i]++; 
        }
        int n = s1.size(),i=0,j=0;
        
       j=n-1;
        while(j<s2.size())
        {
            
            string s = s2.substr(i,(j-i+1));
            use(s,mp2);
           for(auto i:mp2)
               // cout<<i.first<<" "<<i.second<<"\n";
            if(check(mp1,mp2))
                return true;
            mp2.clear();
            i++;j++;
        }
       
        return false;
    }
};