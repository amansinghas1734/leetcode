class Solution {
public:
    int hmg(string& a, string& b) {
        if (a.length() != b.length()) return -1;
        int diff = 0;
        for (int i = 0; i < a.length(); ++i)
            if (a[i] != b[i]) ++diff;
        return diff;
    }

    vector<string> getWordsInLongestSubsequence(vector<string>& words, vector<int>& groups) {
        int n = words.size();
        vector<int> dp(n, 1);           
        vector<int> prev(n, -1);        

        int maxLen = 0, lastIdx = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (groups[i] != groups[j] && hmg(words[i], words[j]) == 1) {
                    if (dp[j] + 1 > dp[i]) {
                        dp[i] = dp[j] + 1;
                        prev[i] = j;
                    }
                }
            }
            if (dp[i] > maxLen) {
                maxLen = dp[i];
                lastIdx = i;
            }
        }

        vector<string> res;
        while (lastIdx != -1) {
            res.push_back(words[lastIdx]);
            lastIdx = prev[lastIdx];
        }

        reverse(res.begin(), res.end());
        return res;
    }
};
