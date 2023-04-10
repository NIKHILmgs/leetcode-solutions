class Solution {
public:
    string largestGoodInteger(string num) {
        string nums=num;
        string s= "";char c = 0;
        for(int i=2;i<num.size();i++)
        {
           if(nums[i-1]==nums[i] and nums[i]==nums[i-2])
           {
                c=max(c,nums[i]);
           }
           
        }
        if(c==0)
            return "";
        else
        {
            for(int i=0;i<3;i++)
            {
                s+=c;
            }
        }
        return s;
    }
};