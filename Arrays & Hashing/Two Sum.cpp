class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++)
        {
            if(m[target-nums[i]]>0)
            {
                ans.emplace_back(m[target-nums[i]]-1);
                ans.emplace_back(i);
                
                return ans;
            }
            
            m[nums[i]] = i+1;
        }
        return ans;
    }
};