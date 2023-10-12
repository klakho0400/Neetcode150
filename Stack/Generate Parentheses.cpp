class Solution {
public:

    void generate(int open, int close, int n, vector<string> &ans, string tmp)
    {
        if(open==n && close==n)
        {
            ans.push_back(tmp);
            return;
        }
        if(open<n)
        {
            generate(open+1,close,n,ans,tmp+"(");
        }
        if(close<open && close<n)
        {
            generate(open,close+1,n,ans,tmp+")");
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        generate(0,0,n,ans,"");
        return ans;
    }
};