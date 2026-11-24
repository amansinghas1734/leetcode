class Solution {
public:
    int hcf(int a,int b){
        while(b){
            int t=a%b;
            a=b;
            b=t;
        }
        return a;
    }

    int maxLength(vector<int>& nums) {
        int n=nums.size();
        int ans=0;

        for(int i=0;i<n;i++){
            long long p=1;
            int h=0;
            long long l=1;

            for(int j=i;j<n;j++){
                h=hcf(h,nums[j]);
                l=l/hcf(l,nums[j])*nums[j];

                if(p>1e18/nums[j]) break;

                p*=nums[j];

                if(p==1LL*h*l){
                    ans=max(ans,j-i+1);
                }
            }
        }

        return ans;
    }
};