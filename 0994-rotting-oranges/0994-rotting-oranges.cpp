class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>q;  //[{row,col},time]
        int freshcnt=0,cnt = 0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({{i,j},0});
                    vis[i][j]=2;
                }
                else
                {
                    vis[i][j]=0;
                }
                if(grid[i][j]==1)
                    freshcnt++;
                    
            }
        }
        int time = 0;
        int row[] = {-1,0,1,0};
        int col[] = {0,1,0,-1};
        
        while(!q.empty())
        {
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            time = max(t,time);
            q.pop();
            for(int i=0;i<4;i++)
            {
               int nrow = r+row[i];
                int ncol = c+col[i];
                if(nrow>=0 and nrow<n and ncol>=0 and ncol<m and vis[nrow][ncol]==0 and grid[nrow][ncol]==1)
                {
                    q.push({{nrow,ncol},t+1});
                    vis[nrow][ncol]=1;
                    cnt++;
                }
            }
        }
         for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
             if(vis[i][j]==0 and grid[i][j]==1)
                 return -1;
            }
         }
        // if(freshcnt!=cnt)
        //     return -1;
        return time;
        
    }
};