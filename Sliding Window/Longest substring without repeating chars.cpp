class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int> m;
        int i = 0;
        int st = 0;
        int ans = 0;
        int cnt = 0;
        while(i<s.size())
        {

            if(st<m[s[i]])
                st = m[s[i]];

            m[s[i]] = i+1;
            ans = max(ans,i-st+1);
            i++;
        }
        return ans;
    }
};