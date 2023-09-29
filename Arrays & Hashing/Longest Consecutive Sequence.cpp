class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(begin(nums),end(nums));
        int maxi = 0;
        for(auto &num:s)
        {
            if(s.find(num-1)==s.end())
            {
                int cnt = 1;
                int cur = num;
                while(s.find(cur+1)!=s.end())
                {
                    cur++;
                    cnt++;
                }
                maxi = max(maxi,cnt);
            }
        }
        return maxi;
    }
};