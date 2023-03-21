class Solution {
public:
    int longestContinuousSubstring(string s) {
       int d=0,ans=1,i=0,mx=1;
        while(i<s.size()-1)
        {
            while(i<s.size()-1 and s[i+1]-s[i]==1)
            {
               mx++;
                // cout<<"mx="<<mx<<endl;
               i++;
                // cout<<"at i="<<s[i]<<" i="<<i<<endl;
            }
           
            ans=max(ans,mx);
            mx=1;
            i++;
        }
        return ans;
        
       
    }
};