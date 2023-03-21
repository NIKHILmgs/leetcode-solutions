class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        // sort(nums.begin(),nums.end());
        set<int>s(nums.begin(),nums.end());
        vector<int>v;
        
        for(int i:s)
            v.push_back(i);
        sort(v.begin(),v.end());
        // for(int i:v)
        //     cout<<i<<" ";
        int ans = 1,c=1,i=0,n=nums.size();
        while(i<v.size()-1)
        {
            while(i<v.size()-1 and v[i+1]-v[i]==1)
            {
                i++;
                c++;
            }
            ans=max(c,ans);
            c=1;
            i++;
        }
        return ans;
    }
};