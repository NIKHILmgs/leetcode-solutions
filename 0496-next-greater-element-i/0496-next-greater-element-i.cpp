class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        
        stack<int>st;
        for(int i=0;i<nums2.size();i++)
        { 
            while(!st.empty() and st.top()<nums2[i])
            {
                mp[st.top()]=nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++)
        {
            if(mp.count(nums1[i]))
                nums1[i]=mp[nums1[i]];
            else
                nums1[i]=-1;
        }
        return nums1;
    }
};