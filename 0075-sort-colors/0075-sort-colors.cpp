class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0,o=0,t=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                z++;
            else if(nums[i]==1)
                o++;
            else
                t++;
        }
        // cout<<z<<" "<<o<<" "t;
        int i=0;
        while(i<z)
        {
            nums[i++]=0;
        }
        // i--;
        int a=i+o;
        while(i<a)
        {
            nums[i++]=1;
        }
        a=i+t;
        while(i<a)
        {
            nums[i++]=2;
        }
    }
};