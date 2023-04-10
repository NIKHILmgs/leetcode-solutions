class Solution {
public:
    string reverseWords(string s) {
       string str="";
        vector<string>v;
        int n = s.size();
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]!=' ')
            {
                str+=s[i];
            }
            else
            {
                reverse(str.begin(),str.end());
                if(str.size()>0)
                v.push_back(str);
                str = "";
            }
        }
        str="";
        int i=0;
        while(i<s.size() and s[i]!=' ')
        {
          str+=s[i];
            i++;
        }
        v.push_back(str);
        
        str="";
        for(int i=0;i<v.size();i++)
        {
            if(v[i].size()>0)
            {str+=v[i];
            str+=" ";}
        }
        str.pop_back();
        return str;
        
    }
};