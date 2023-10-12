class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> data;
        int n = speed.size();
        for(int i = 0; i < n; i++)
        {
            data.push_back({position[i],speed[i]});
        }
        sort(data.rbegin(),data.rend());
        stack<float> st;
        for(int i = 0; i < n; i++)
        {
            float time = (target-data[i].first*1.0)/data[i].second;
            if(st.empty()||time > st.top())
            st.push(time);
        }
        int ans = st.size();
        return ans;

    }
};