class Solution {
public:
string d2b(int n,int s)
{
    string str="";
    // Size of an integer is assumed to be 32 bits
   for(int i=0; n>0; i++)    
    {    
       int p=n%2; 
       str+=(p+'0');
       n= n/2;  
    }   
    if(str.size()<s)
    {
        int l=str.size();
        for(int i=0;i<s-l;i++)
        {
            str='0'+str;
        }
    }
// cout<<"Binary of the given number= ";    

    return str;
}
    string anss(int &n,vector<string>& nums,int &s)
    {
        unordered_map<string,int>mp;
        for(auto i:nums)
            mp[i]++;
        
        vector<string>v;
        for(int i=1;i<=n;i++)
        {
            v.push_back(d2b(i,s));
        }
        string ans;
        for(int i=0;i<n;i++)
        {
            if(mp.find(v[i])==mp.end())
            {
                ans=v[i];
                break;
            } 
        }
        return ans;
    }
    string findDifferentBinaryString(vector<string>& nums) {
        sort(nums.begin(),nums.end());
        int s = nums[0].size();
        int m = pow(2,s);
        int n = nums.size();
        if(n==1)
        {
            string p = nums[0];
            if(p=="1")
                return "0";
             else
               return "1";
        }
        string ans = anss(m,nums,s); 
        
        return ans;
    }
};