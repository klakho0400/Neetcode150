class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        heights.push_back(0);
        int maxArea = 0;
        stack<int> st;

        for(int i = 0; i <= n; i++)
        {
            int curr = heights[i];
            while(!st.empty() && curr<heights[st.top()])
            {
                int temp = heights[st.top()];
                st.pop();
                int area;
                if(st.empty())
                area = temp*i;
                else
                area = temp*(i-st.top()-1);
                maxArea = max(maxArea,area);
            }
            st.push(i);
        }
        return maxArea;
    }
};