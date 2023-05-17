class Solution {
public: // 0 1
    bool doesValidArrayExist(vector<int>& derived) {
       int n=0;
        for(auto x:derived)
            n^=x;
        if(n==0)return 1;
        else return 0;
    }
};