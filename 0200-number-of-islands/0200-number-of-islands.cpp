class Solution {
public:
   
    void bfs(int row, int col, vector<vector<int>>&vis,vector<vector<char>>&grid)
    {
        vis[row][col]=1;
         int n = grid.size(),c=0;
        int m = grid[0].size();
        queue<pair<int,int>>q;
        q.push({row,col});
        while(!q.empty())
        {
            int r= q.front().first;
            int c = q.front().second;
            q.pop();
            vector<vector<int>>v={{-1,0},{0,1},{0,-1},{1,0}};
            for(auto x:v)
            {
               int nrow = r+ x[0];
               int ncol = c+x[1];
                if(nrow>=0 and nrow<n and ncol>=0 and ncol<m and grid[nrow][ncol]=='1' and vis[nrow][ncol]!=1)
                    {
                        q.push({nrow,ncol});
                        vis[nrow][ncol]=1;
                    }
            }
            
        }
        
}
    
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size(),c=0;
        int m = grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int row = 0;row<n;row++)
        {
            for(int col = 0;col<m;col++)
            {
                if(!vis[row][col] and grid[row][col]=='1')
                {
                    c++;
                    bfs(row,col,vis,grid);
                }
            }
        }  
        
        return c;

       
    }
};