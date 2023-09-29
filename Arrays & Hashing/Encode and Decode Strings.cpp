class Solution {
public:
    /*
     * @param strs: a list of strings
     * @return: encodes a list of strings to a single string.
     */
    string encode(vector<string> &strs) {
        string ans = "";
        for(int i = 0; i < strs.size(); i++)
        {
            ans+=strs[i];
            ans+=":;";
        }
        return ans;
    }

    /*
     * @param str: A string
     * @return: decodes a single string to a list of strings
     */
    vector<string> decode(string &str) {
        vector<string> ans;
        string temp = "";
        for(int i = 0; i < str.size()-1; i++)
        {
            if(str[i]==':' && str[i+1]==';')
            {
                ans.push_back(temp);
                temp = "";
                i++;
            }
            else
            {
                temp+=str[i];
            }
        }
        return ans;
    }
};