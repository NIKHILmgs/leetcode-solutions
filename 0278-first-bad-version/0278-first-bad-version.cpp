// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 0,h = n,bad;
        while(l<=h)
        {
            int mid = l+(h-l)/2;
            if(isBadVersion(mid) and !isBadVersion(mid-1))
            {
                // if( isBadVersion(mid-1))
                //    return mid-1;
                // else
                    return mid;
            }
            else if(isBadVersion(mid)==false)
                l = mid+1;
            else
                 h = mid;
            
//               int low = 0;
//         int high = n;

//         while(low<=high){
//             int mid = low + (high-low)/2;
//             if(isBadVersion(mid)==true && isBadVersion(mid-1)==false)   return mid;
//             else if(isBadVersion(mid)==false ) low = mid+1;
//             else high= mid;
        }
        return -1;
    
    }
};