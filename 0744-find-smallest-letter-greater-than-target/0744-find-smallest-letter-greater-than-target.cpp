class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
       int l=0,n = letters.size(),h = n-1,mid;
        while(l<=h)
        {
            mid = l+(h-l)/2;
            if(letters[mid]<=target)
                l = mid+1;
            else
                h = mid-1;
        }
        return letters[l%n];
    }
};