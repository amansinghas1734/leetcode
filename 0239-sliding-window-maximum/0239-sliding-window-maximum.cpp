class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> que;
        for(int i=0;i<k;i++){
            while(!que.empty()&&nums[que.back()]<nums[i]){
                que.pop_back();
            }
            que.push_back(i);
        }
        for(int i=k;i<nums.size();i++){
            while(que.front()<i-k){
                que.pop_front();
            }
            ans.push_back(nums[que.front()]);
            while(!que.empty()&&nums[que.back()]<nums[i]){
                que.pop_back();
            }
            que.push_back(i);
        }
        while(que.front()<nums.size()-k){
                que.pop_front();
        }
        ans.push_back(nums[que.front()]);
        return ans;
    }
};