class Solution {
public:
    int fo(vector<int>&nums,int t){
        int n=nums.size();
        int l=0;int h=n-1;
        while(l<=h){
            int m=l+(h-l)/2;
            if(nums[m]==t){
                if(m==0){
                    return m;
                }
                else{
                    if(nums[m-1]!=t)
                        return m;
                    else
                        h=m-1;
                }
            }
            else if(nums[m]>t)
                h=m-1;
            else
                l=m+1;
        }
        return -1;
    }
    int lo(vector<int>&nums,int t){
        int n=nums.size();
        int l=0;int h=n-1;
        while(l<=h){
            int m=l+(h-l)/2;
            if(nums[m]==t){
                if(m==n-1){
                    return m;
                }
                else{
                    if(nums[m+1]!=t)
                        return m;
                    else
                        l=m+1;
                }
            }
            else if(nums[m]>t)
                h=m-1;
            else
                l=m+1;
        }
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int a=fo(nums,target);
       
        int b=lo(nums,target);
       
        return {a,b};
        
    }
};