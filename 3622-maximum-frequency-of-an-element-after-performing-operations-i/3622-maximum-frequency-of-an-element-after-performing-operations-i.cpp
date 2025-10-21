class Solution {
public:
    int maxFrequency(vector<int>& nums, int k, int numOperations) {
        int maxEl=*max_element(begin(nums),end(nums))+k;
        vector<int> freq(maxEl+1,0);
        for(auto x:nums){
            freq[x]++;
        }
        for(int i=1;i<=maxEl;i++){
            freq[i]+=freq[i-1];
        }
        int ans=0;
        for(int t=0;t<=maxEl;t++){
            if(freq[t]==0){
                continue;
            }
            int right=min(maxEl,t+k);
            int left=max(0,t-k);
            int c= freq[right]-(left>0?freq[left-1]:0);
            int crr=freq[t]-(t>0?freq[t-1]:0);
            int corr=c-crr;
            ans=max(ans,crr+min(numOperations,corr));
        }
        return ans;
    }
}; 