class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string result;
        int count = 0;

        for (int i = s.length() - 1; i >= 0; --i) {
            if (s[i] == '-') continue;
            if (count == k) {
                result.push_back('-');
                count = 0;
            }
            result.push_back(toupper(s[i]));
            count++;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};
