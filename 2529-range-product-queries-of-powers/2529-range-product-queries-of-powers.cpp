class Solution {
public:
    const int MOD = 1e9+7;

    long long mod_pow(long long base, long long exp) {
        long long result = 1;
        base %= MOD;
        while (exp > 0) {
            if (exp & 1) result = (result * base) % MOD;
            base = (base * base) % MOD;
            exp >>= 1;
        }
        return result;
    }

    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        vector<int> ans;
        vector<long long> powers;
        int x = 0;

        while (n > 0) {
            if (n & 1) {
                powers.push_back(mod_pow(2, x));
            }
            x++;
            n >>= 1;
        }

        for (int i = 1; i < powers.size(); i++) {
            powers[i] = (powers[i] * powers[i-1]) % MOD;
        }

        for (auto &q : queries) {
            int L = q[0], R = q[1];
            long long product = powers[R];
            if (L > 0) {
                product = (product * mod_pow(powers[L-1], MOD-2)) % MOD; 
            }
            ans.push_back((int)product);
        }

        return ans;
    }
};
