class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int m = 1,c=1;
        for(int i=0;i<nums.size()-1;i++)
        {
          if(nums[i]<nums[i+1])
          {
              c++;
              m = max(c,m);
          }
            else 
            {
                c=1;
            }
            
        }
        m = max(c,m);
        return m;
    }
};