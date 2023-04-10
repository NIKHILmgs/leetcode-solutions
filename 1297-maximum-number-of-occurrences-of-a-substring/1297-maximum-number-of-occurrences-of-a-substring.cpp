class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        unordered_map<string,int>mp;
        for(int i=0;i<=s.size()-minSize;i++)
        {
            string str = s.substr(i,minSize);
            mp[str]++;
        }
        int c=0;
        for(auto i:mp)
        {
            set<char>st;
            st.insert(i.first.begin(),i.first.end());
            int n = st.size();
            if(n<=maxLetters)
            {
                c=max(c,i.second);
            }
        }
        return c;
    }
};