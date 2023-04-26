class Solution {
public:
    int addDigits(int num) {
        int s=0,ans=0;
        while(num>9)
            
        {
           while(num)
           {
               s = num%10;
               ans+=s;
               num/=10;
           }
            num = ans;
            ans=0;
        }
        return num;
    }
};