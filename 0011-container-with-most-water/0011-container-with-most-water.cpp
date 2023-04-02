class Solution {
public:
    int maxArea(vector<int>& height) {
        int mx=-1;
        int i = 0, j = height.size()-1;
        while(i<=j){
          int t =( min(height[i],height[j]) * (j-i) );
          mx =  max(mx,t);
          if(height[i]<height[j]){
          i++;
          }
          else if(height[i]>height[j]){
          j--;
          }
          else {
          i++;
          j--;
          }
        }

        return mx;
    }
};