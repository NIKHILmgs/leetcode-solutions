class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
 int val = 1;
        int count = 0;
        int index =0;
        while(index < arr.size()){
            if(val == arr[index]){
                // count++;
                val++;
                index++;
            } else if(val != arr[index]){
                count++;
                val++;
            }
            if(k == count){
                return val-1;
            }
        }
        return val + (k - count) - 1;
        
    }
};