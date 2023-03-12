class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int i=0,n = nums.size(),j=0;
        while(i<n)
        {
            int si = i;
            while(i<n-1 and nums[i]==nums[i+1])
                i++;
            int len = i-si+1;
            int freq = min(len,2);
            while(freq--)
            {
                nums[j]=nums[si];
                j++;
            }
                
                i++;
        }
        return j;
    
        
    }
};