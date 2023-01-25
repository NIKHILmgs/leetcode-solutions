class Solution {
public:
    bool isIsomorphic(string s, string t) {
//         int arr1[256],arr2[256];
//         for(int i=0;i<256;i++)
//         {
//             arr1[i]=0;
//             arr2[i]=0;
//         }
//         for(int i=0;i<s.size();i++)
//         {
//             arr1[s[i]-'0']++;
//             arr2[t[i]-'0']++;
//         }
//         int c1=0,c2=0;
//          for(int i=0;i<256;i++)
//         {
//             if(arr1[i]>0)c1++;
//            if( arr2[i]>0 )c2++;
//         }
//         // cout<<c1<<" "<<c2;
//         if(c1!=c2)
//             return false;
           
//         sort(arr1,arr1+s.size());
//         sort(arr2,arr2+s.size());
//          for(int i=0;i<s.size();i++)
//         {
//            if(arr1[i]!=arr2[i])
//                return false;
//         }
//         return true;
         unordered_map<char, char> mp, mp2;
        for (int i=0; i<s.length(); ++i) {
            if (mp[s[i]] && mp[s[i]]!=t[i]) return false;
            if (mp2[t[i]] && mp2[t[i]]!=s[i]) return false;
            mp[s[i]]=t[i];
            mp2[t[i]]=s[i];
        }
        return true;
    }
};