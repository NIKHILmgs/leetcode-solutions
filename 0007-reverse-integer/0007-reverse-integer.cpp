class Solution {
public:
    int reverse(int x) {
        
        string str=to_string(x);
        
         string s = string(str.rbegin(), str.rend());
        
       
        int j = 0;
        int c=0;
            int n = s.length();
            if(s[j]=='0')
            {
                while(s[j++]=='0')
                {
                    c++;
                }
            }
        // cout<<s;
        if(c>0)
        s.erase(0,c-1);
        
        cout<<s;
        stringstream ss(s);
           
        long a = 0;
        ss>>a;
        
         
        if(a>INT_MAX or a<INT_MIN)
            return 0;
        else
        {
            if(x<0)
            return -1*a;
            else
                return a;
        }
        
        
    }
};