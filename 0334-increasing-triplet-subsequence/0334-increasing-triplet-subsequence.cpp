class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
        int a,b,i=0; a=b=INT_MAX;
        
        while(i<n)
        {
           if(nums[i]<=a)
               a=nums[i];
           else if(nums[i] <= b)
                b=nums[i];
            else
                return true;
            i++;
        }
        return false;
        
    }
};