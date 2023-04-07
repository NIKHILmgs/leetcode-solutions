class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n = s.size(),sum=0;
        int pref[n];
        for(int i=0;i<n;i++)
            pref[i]=abs(s[i]-t[i]);
       int i=0,j=0,mx=0;
        while(i<n and j<n)
        {
            sum+=pref[j++];
            if(sum<=maxCost)
            {
                mx = max(mx,j-i);
            }
            else
            {
                sum-=pref[i++];
            }
        }
        return mx;
    }
};