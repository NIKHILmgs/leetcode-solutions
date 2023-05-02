class Solution {
public:
    int arraySign(vector<int>& nums) {
        int pos=0,neg=0,zer=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
                neg++;
            else if(nums[i]==0)
                return 0;
            else
                pos++;
        }
        if(neg%2)
            return -1;
        else return 1;
        return 1;
        
    }
};