class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        int low = 0,n = numbers.size(),high = n-1,mid;
        while(low<=high)
        {
           int n = numbers[low]+numbers[high];
            if(n == target)
            {
                return {low+1,high+1};
            }
            else if(n>target)
            {
                high--;
            }
            else low++;
        }
        return ans;
        
        
    }
};