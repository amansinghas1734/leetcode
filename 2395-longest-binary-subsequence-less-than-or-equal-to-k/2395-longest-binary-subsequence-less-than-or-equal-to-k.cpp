class Solution {
public:
    int longestSubsequence(string s, int k) {
        int n = s.size();
        int length = 0;  
        long long value = 0; 
        long long base = 1;  

        for (int i = n - 1; i >= 0; i--) {
            char c = s[i];
            if (c == '0') {
                length++;
            } else {
                if (base <= k && value + base <= k) {
                    value += base;
                    length++;
                }
            }

            if (base <= k) base <<= 1; 
        }

        return length;
    }
};
