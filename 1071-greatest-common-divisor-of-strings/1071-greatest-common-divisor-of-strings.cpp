class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n = __gcd(str1.size(),str2.size());
        string s = str1.substr(0,n);
        if(str1+str2==str2+str1)
            return s;
        return "";
        
    }
};