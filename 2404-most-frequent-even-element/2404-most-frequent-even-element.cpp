class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>mp;
        for(auto i:nums)
            mp[i]++;
        int m1=INT_MIN,ans;
        for(auto i:mp)
        {
            if(i.first%2==0 and i.second>m1 )
            {
                 m1 = max(m1,i.second);
                ans = i.first;
            }
                // m = max(m,i.second);
        }
        
        if(m1>0)
            return ans;
        else
            return -1;
        
        
    }
};