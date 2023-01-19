class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>v;
        int n=nums.size();
//         for(int i=0;i<nums.size();i++)
//         {
//             if(nums[abs(nums[i])-1]<0)
//             {
//                 continue;
//             }
            
//             else
//             {
//                 nums[abs(nums[i])-1]*=-1;
//             }
//         }
//         for(int i=0;i<nums.size();i++)
//         {
//             // cout<<i<<endl;
//             if(nums[i]>0)
//                 v.push_back(nums[i]);
//         }
        
        for(int i=0;i<n;i++){
            int ind=abs(nums[i])-1;
            if(nums[ind]>0)
                nums[ind]*=-1;
        }
        for(int i=0;i<n;i++){
            if(nums[i]>0)
                v.push_back(i+1);
        }
        return v;
    }
};