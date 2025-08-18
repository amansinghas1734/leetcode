class Solution {
public:
    bool judgePoint24(vector<int>& cards) {
           vector<double> card(cards.begin(), cards.end());
           return back_track(card);
    }
    bool back_track(vector<double> nums) {
        if (nums.size() == 1) {
            return fabs(nums[0]- 24.0) < 1e-6;
        }
        int n = nums.size();
        for (int i = 0; i < n; i++)
          for (int j = i + 1; j < n; j++) {
               vector<double> newNum;
               for (int k = 0 ; k < n; k++)
                 if (k!=i && k!=j) 
                   newNum.push_back(nums[k]);
               for (double x : combine(nums[i], nums[j])) {
                   newNum.push_back(x);
                   if (back_track(newNum)) return true;
                   newNum.pop_back();
               }
          }
          return false;
    }
    unordered_set<double> combine(double a, double b) {
        unordered_set<double> res;
        res.insert(a + b);
        res.insert(a - b);
        res.insert(b - a);
        res.insert(a * b);
        if (fabs(a) > 1e-6) res.insert(b / a);
        if (fabs(b) > 1e-6) res.insert(a / b);
        return res;
    }
};