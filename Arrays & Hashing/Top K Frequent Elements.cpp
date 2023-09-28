// Hashing based solution
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        vector<int> ans;
        vector<pair<int,int>> temp;
        for(auto &x: nums)
        {
            m[x]++;
        }
        for(auto &x: m)
        {
            temp.push_back({x.second,x.first});
        }
        sort(temp.begin(),temp.end());
        for(int i = 0; i < k; i++)
        {
            ans.push_back(temp[temp.size()-1-i].second);
        }
        return ans;
    }
};


// Heap Based solution

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(int i:nums)m[i]++;
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p;
        for(auto it:m){
            p.push({it.second,it.first});
            if(p.size()>k)p.pop();
        }
        vector<int>ans;
        while(k--){
            ans.push_back(p.top().second);
            p.pop();
        }
        return ans;
    }
};