class Solution {
public:
    bool ispal(string s){
      
        int i=0;int j=s.length()-1;
        while(i<j){
            if(s[i++]!=s[j--])
            return false;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        int ml=-1;
        string ans;
        int n=s.length();
        while(i<n){
            while(j>i and s[j]!=s[i]){
                j--;
            }
            if(s[j]==s[i]){
                string str = s.substr(i,j-i+1);
                if(ispal(str)){
                    int len=str.length();
                    if(len>ml){
                        ml=str.length();
                        ans=str;
                    }
                    i++;
                    j=s.length()-1;
                }
                else
                j--;
            }
        }

        return ans;
    }
};