class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int n = tokens.size();
        for(int i = 0; i<n; i++)
        {
            if(tokens[i]=="*"||tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="/")
            {
                int temp1 = st.top();
                st.pop();
                int temp2 = st.top();
                st.pop();

                if(tokens[i]=="*")
                {
                    st.push(temp1*temp2);
                }
                else if(tokens[i]=="+")
                {
                    st.push(temp1+temp2);
                }
                else if(tokens[i]=="/")
                {
                    st.push(temp2/temp1);
                }
                else if(tokens[i]=="-")
                {
                    st.push(temp2-temp1);
                }

            }
            else
            {
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};