class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> m;
        int longest = 0;
        int topfreq = 0;
        int l = 0;
        int r = 0;
        while(r<s.size())
        {
            m[s[r]]++;
            topfreq = max(topfreq,m[s[r]]);
            while(r-l+1-topfreq>k)
            {
                m[s[l]]--;
                l++;
            }
            longest = max(longest,r-l+1);
            r++;
        }
        return longest;
    }
};