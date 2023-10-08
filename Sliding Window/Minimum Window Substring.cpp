class Solution {
public:
    string minWindow(string s, string t) {
        if(s.size()<t.size())
        return "";

        vector<int> m(128,0);
        for(auto c: t) m[c]++;
        int counter=t.size(), start=0, end=0, minLen=INT_MAX, minStart=0;
        while(end<s.size()){
		// If char in s exists in t, decrease counter
		if (m[s[end]] > 0)
			counter--;
		// Decrease m[s[end]]. If char does not exist in t, m[s[end]] will be negative.
		m[s[end]]--;
		end++;
		// When we found a valid window, move start to find smaller window.
		while (counter == 0) {
			if (end - start < minLen) {
				minStart = start;
				minLen = end - start;
			}
			m[s[start]]++;
			// When char exists in t, increase counter.
			if (m[s[start]] > 0)
				counter++;
			start++;
		}
	}
	if (minLen != INT_MAX)
		return s.substr(minStart, minLen);
	return "";

    }
};