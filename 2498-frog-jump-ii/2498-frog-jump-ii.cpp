class Solution {
public:
    
  
    int maxJump(vector<int>& stones) {
        int n = stones.size();
       int mx = stones[1]-stones[0];
       
        for(int i=1;i<n-1;i++)
            mx = max(mx,(stones[i+1]-stones[i-1]));
        return mx;
        
    }
};