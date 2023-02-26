class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int low=0,high=arr.size()-1,mid;
        while(low<=high)
        {
            mid = low + (high-low)/2;
            // cout<<low<<' '<<mid<<' '<<high<<endl;
            // cout<<"at="<<arr[mid]<<endl;
            if(mid==0){
                if(arr[mid]>arr[mid+1])
                    return mid;
                else 
                    low=mid+1;
            }
            else if(mid==n-1){
                if(arr[mid]>arr[mid-1])
                    return mid;
                else 
                    high=mid-1;
            }
            else{
                if(arr[mid]>arr[mid-1] and arr[mid]>arr[mid+1])
                return mid;
            else if(arr[mid]>arr[mid+1])
                high=mid-1;
            else if(arr[mid]>arr[mid-1])
                low=mid+1;
            }
            
            // cout<<low<<' '<<mid<<' '<<high<<endl;
            
        }
        return 0;
        
    }
};