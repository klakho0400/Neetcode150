class Solution {
public:
 
    bool checkInclusion(string s1, string s2) {
        int k = s1.size();
        int n = s2.size();
        if(k>n)
        return false;
        vector<int> m1(26, 0), m2(26, 0);
        int i = 0;
        for(int i = 0; i < k; i++)
        {
            m1[s1[i]-'a']++;
            m2[s2[i]-'a']++;
        }
        if(m1==m2)
        {
            return true;
        }
        for(int j = k; j<n; j++)
        {
            m2[s2[j-k]-'a']--;
            m2[s2[j]-'a']++;
            if(m1==m2)
            {
                return true;
            }
        }

        return false;

    }
};