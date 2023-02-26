class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1)
            return true;
        long  l = 2, h = num/2, m;
        while(l<=h)
        {
            m = l+(h-l)/2;
            if(m*m==num)
                return true;
            else if(m*m<num)
                l = m + 1;
            else
                h = m-1;
            
        }
        return false;
    }
};