class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>v(n,vector<int>(n,0));
        int top=0;
        int bottom = v.size()-1;
        int left = 0;
        int right = v[0].size()-1;
        int c=1;
        
        
        
        
        while(top<=bottom and left<=right)
        {
            for(int i=left;i<=right;i++)
            {
                // v.push_back(matrix[top][i]);
                v[top][i]=c;
                c++;
            }
            
            top++;
            if(top>bottom)
                break;
            
              for(int i=top;i<=bottom;i++)
            {
                // v.push_back(matrix[i][right]);
                v[i][right]=c;
                  c++;
            }
            right--;
            
            if(right<left)
                break;
            
              for(int i=right;i>=left;i--)
            {
                // v.push_back(matrix[bottom][i]);
                  v[bottom][i]=c;
                  c++;
            }
            bottom--;
            
            if(bottom<top)
                break;
            
                 for(int i=bottom;i>=top;i--)
            {
                // v.push_back(matrix[i][left]);
                     v[i][left]=c;
                     c++;
            }
            left++;
            
            if(left>right)
                break;
            
            
        }

        return v;
    
        
    }
};