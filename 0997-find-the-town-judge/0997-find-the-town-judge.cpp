class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        sort(trust.begin(),trust.end());
        int ans=-1;
        int arr1[n],arr2[n];
        for(int i=0;i<n;i++)
        {
           arr1[i]=0; 
            arr2[i]=0;
        }
            
        for(int i=0;i<trust.size();i++)
        {
           arr1[trust[i][0]-1]++;
           arr2[trust[i][1]-1]++;
        }
       for(int i=0;i<n;i++)
       {
           if(arr1[i]==0 and arr2[i]==(n-1))
               return i+1;
       }
        
        return -1;
    }
};