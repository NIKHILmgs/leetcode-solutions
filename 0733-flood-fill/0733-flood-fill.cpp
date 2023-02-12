class Solution {
public:
    void dfs(int row,int col,vector<vector<int>>& ans,vector<vector<int>>& image,int newcolor,int r[],int c[],int inicolor )
    {
        ans[row][col]=newcolor;
        int n = image.size();
        int m = image[0].size();
        
        for(int j=0;j<4;j++)
        {
            int nrow = row+r[j];
            int ncol = col+c[j];
             if(nrow>=0 and nrow<n and ncol>=0 and ncol<m and image[nrow][ncol]==inicolor and ans[nrow][ncol]!=newcolor)
                    {
                       dfs(nrow,ncol,ans,image,newcolor,r,c,inicolor);
                    }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int iniColor = image[sr][sc];
        vector<vector<int>>ans=image;
        int row[] = {-1,0,1,0};
        int col[] = {0,1,0,-1};
        dfs(sr,sc,ans,image,color,row,col,iniColor);
        return ans;
        
    }
};