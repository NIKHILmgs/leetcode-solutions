class Solution {
public:
    int findPeakElement(vector<int>& nums) {
//         int l = 0,h=nums.size()-1,n = h+1;
//         while(l<h)
//         {
//             int mid = l+(h-l)/2;
//             if(mid == 0)
//             {
//                return (nums[mid]>=nums[mid+1])?0:1;
//             }
//             if(mid == n-1)
//             {
//                 return (nums[mid]>=nums[mid-1])?n-1:n-2;
//             }
//             if(nums[mid]>=nums[mid-1] and nums[mid]>=nums[mid+1])
//                 return mid;
//             if(nums[mid]<nums[mid-1])
//                 h = mid-1;
//             else
//                 l = mid+1;
            
//         }
//          return l;
        int l = 0,h=nums.size()-1,n = h+1;
        while(l<h)
        {
            int mid = l+(h-l)/2;
           
            if((mid == 0 or (nums[mid]>nums[mid-1])) and ((mid == nums.size()-1 ) or (nums[mid]>nums[mid+1])))
                return mid;
            if(nums[mid+1]>nums[mid])
                l = mid+1;
            else
                h = mid-1;
            
        }
         return l;
        
    }
};