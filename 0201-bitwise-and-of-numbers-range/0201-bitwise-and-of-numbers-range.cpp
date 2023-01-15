class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        if(left==0 and right==0)
            return 0;
        long mask = 1L<<31;
        int ans=0;
        while(mask)
        {
            if((mask&left)==(mask&right))
            {
                if(mask&left)
                ans+=mask;
                mask>>=1;
            }
            else
            {
                break;
            }
                
            
        }
        return ans;
        
    }
};