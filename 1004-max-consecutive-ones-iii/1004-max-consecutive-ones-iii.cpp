class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
         int i=0,j=0,ans=INT_MIN;
        int n=nums.size();
        int countzero=0;
        while(j<n)
        {
             if(nums[j]==0)
                countzero++;
            while(countzero>k)
            {
                if(nums[i]==0)
                {
                  countzero--;
                    
                }
                i++;
            }    
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};