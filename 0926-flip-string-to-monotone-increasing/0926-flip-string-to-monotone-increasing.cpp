class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int c1=0,c=0,c0=0;
//         for(int i=0;i<s.size()-1;i++)
//         {
//             if(s[i]=='1' and s[i+1]=='0')
//                 c++;
           
//         }
        for(int i=0;i<s.size();i++)
        {
           if(s[i]=='1')
                c1++;
            else
                c0++;
            c0=min(c1,c0);
        }
        cout<<c<<" "<<c1<<" "<<c0<<"\n";
        return c0;
        
    }
};