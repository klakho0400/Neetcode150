class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> ans;
        for(int i = 0; i < nums.size(); i ++)
        {
         
            while(!dq.empty() && dq.back()<nums[i])
            dq.pop_back();
            //remove all smaller elements fron back of the monotincally dec que

            dq.push_back(nums[i]);
            if(i>=k-1)
            {
            ans.push_back(dq.front());
            if(nums[i-k+1]==dq.front()) dq.pop_front() //remove out of range max;
            }
        }
        return ans;
    }
};