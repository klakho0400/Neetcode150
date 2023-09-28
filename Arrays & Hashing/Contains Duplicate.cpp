class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto x: nums)
        {
            if(m[x]>0)
            return true;
            m[x]+=1;

        }
        return false;
    }
};