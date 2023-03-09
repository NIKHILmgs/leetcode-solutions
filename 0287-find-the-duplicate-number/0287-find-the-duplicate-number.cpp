class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            // cout<<"at i="<<i<<endl;
            if(nums[abs(nums[i])]<0){
                // cout<<"found neg="<<nums[abs(nums[i])]<<endl;
                return abs(nums[i]);
            }
            else
            {
                // cout<<"found pos="<<nums[abs(nums[i])]<<endl;
                nums[abs(nums[i])]=(-1*nums[abs(nums[i])]);
            }
        }
        return -1;
        
    }
};