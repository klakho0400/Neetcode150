class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> m;
        if(s.size()!=t.size())
        return false;
        for(auto x: s)
        {
            m[x]++;
        }
        for(auto x: t)
        {
            if(m[x]>0)
            {
                m[x]--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
}