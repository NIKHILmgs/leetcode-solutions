class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
         unordered_map<int,int>mp;
       for(int i=0;i<nums.size();i++)
       {
           mp[nums[i]]=i;
       }
       for(int i=0;i<nums.size();i++)
       {
           if(!mp.count(original))
                return original;
           else
               original*=2;
       }
         return original;   
    }
};