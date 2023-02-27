class Solution {
public:
    int mySqrt(int x) {
        long l = 0,h = (x/2)+1, mid;
        while(l<h)
        {
            mid = l+(h-l+1)/2;
            if(mid*mid<=x)
            {
               l = mid;
            }
           
            else
            {
                h = mid - 1;
            }
        }
       return l; 
    }
};