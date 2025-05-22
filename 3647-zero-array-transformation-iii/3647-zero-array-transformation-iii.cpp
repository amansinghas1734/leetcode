class Solution {
public:
    int maxRemoval(vector<int>& nums, vector<vector<int>>& queries) {
        sort(queries.begin(), queries.end());
        priority_queue<int> available;
        priority_queue<int, vector<int>, greater<int>> assigned;
        int count = 0;

        for (int i = 0, k = 0; i < nums.size(); i++) {
            while (!assigned.empty() && assigned.top() < i)
                assigned.pop();
            while (k < queries.size() && queries[k][0] <= i) 
                available.push(queries[k++][1]);
            while (assigned.size() < nums[i] && 
                  !available.empty() && available.top() >= i) {
                assigned.push(available.top());
                available.pop();
                count++;
            }
            if (assigned.size() < nums[i])
                return -1;
        }
        return queries.size() - count;
    }
};