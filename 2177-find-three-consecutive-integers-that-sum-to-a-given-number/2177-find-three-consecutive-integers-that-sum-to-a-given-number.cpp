class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        // long long sum = 0,i=0;
        // vector<long long> ans;
        // while(i<num)
        // {
        //     if((i)+(i+1)+(i+2)==num)
        //     {
        //         ans.push_back(i);
        //         ans.push_back(i+1);
        //         ans.push_back(i+2);
        //         break;
        //     }
        // }
        // return ans;
        
        if(num%3!=0)
            return {};
        long long x = num/3;
        return {x-1,x,x+1};
    }
};