class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mx = 0,c=0;
        int i=0,n = nums.size();
        while(i<n)
        {
           
            if(nums[i]==1)
            {
                c++;
                mx = max(mx,c);
                // c=0;
            }
            else
                c=0;
            i++;
        }
        return mx;
        
    }
};