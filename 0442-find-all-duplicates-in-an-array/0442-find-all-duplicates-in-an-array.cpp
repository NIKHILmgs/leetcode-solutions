class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>v;
     for(int i=0;i<nums.size();i++)
        {
            if(nums[abs(nums[i])-1]<0)
            {
                v.push_back(abs(nums[i]));
                continue;
            }
            
            else
            {
                nums[abs(nums[i])-1]*=-1;
            }
        }
        // for(int i=0;i<nums.size();i++)
        // {
        //     // cout<<i<<endl;
        //     if(nums[i]>0)
        //         v.push_back(i+1);
        // }
        return v;
        
    }
};