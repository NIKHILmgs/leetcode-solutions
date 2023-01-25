class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>v;
         string str="";
        s=s+" ";
        for(char i : s)
        {
            // cout<<i<<"\n";
           
            if(i==' ')
            {
                v.push_back(str);
               str="" ;
            }
                
            else
                str+=i;
        }
        // for(auto i: v)
        // {
        //     cout<<i<<" ";
        // }
       // string str="";
        map<char,string>mp1;
        for(int i=0;i<pattern.size();i++)
        {
            char a=pattern[i]; string str=v[i];
            if(mp1.find(a)!=mp1.end())
            {
                if(mp1[a]!=str)
                    return false;
            }
            mp1.insert({a,str});
        }
        
         map<string,char>mp2;
        for(int i=0;i<pattern.size();i++)
        {
            char a=pattern[i]; string str=v[i];
             if(mp2.find(str)!=mp2.end())
            {
                if(mp2[str]!=a)
                    return false;
            }
            mp2.insert({str,a});
        }
//         if()
        
//         for(auto i:mp)
//             cout<<i.first<<" "<<i.second<<"\n";
        if(v.size()!=pattern.size())
            return false;
        return true;
    }
};