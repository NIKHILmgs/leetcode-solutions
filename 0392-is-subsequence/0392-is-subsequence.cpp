class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size(),m = t.size(),i=0,j=0;
        while(i<n and j<m)
        {
            if(s[i]==t[j])
                i++;
            j++;
        }
        return i==n;
    }
};