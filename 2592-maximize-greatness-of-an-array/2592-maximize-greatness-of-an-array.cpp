class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int res = 0;
        for (int& a : nums)
            if (a > nums[res])
                res++;
        return res;
        
    }
};