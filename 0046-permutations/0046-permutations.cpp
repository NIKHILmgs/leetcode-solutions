class Solution {
public:
//     void permut(vector<vector<int>>&ans, int arr[],vector<int>v, vector<int>nums)
//     {
//         if(v.size()==nums.size())
//         {
//             // cout<<"I am here"<<"\n";
//             ans.push_back(v);
//             return;
//         }
        
//         for(int i=0;i<nums.size();i++)
//         {
//             if(arr[i]!=1)
//             {
//                 arr[i]=1;
//                 v.push_back(nums[i]);
//                 permut(ans,arr,v,nums);
//                 arr[i]=0;
//                 v.pop_back();
//             }
//         }
//     }
    void permut(int idx, vector<vector<int>>&ans,vector<int>&nums)
    {
        if(idx==nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for(int i=idx;i<nums.size();i++)
        {
            swap(nums[idx],nums[i]);
            permut(idx+1,ans,nums);
            swap(nums[idx],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        int freq_array[nums.size()];
        
        for(int i=0;i<nums.size();i++)
            freq_array[i]=0;
        
        vector<int>v;
        vector<vector<int>>ans;
        
        // permut(ans,freq_array,v,nums);
        permut(0,ans,nums);
        
        return ans;
        
    }
};