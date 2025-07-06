class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=0;
        int k=0;
        while(j<m&&k<n){
            if(nums1[j]<=nums2[k]){
                j++;
            }
            else{
                swap(nums1[j],nums2[k]);
                sort(nums2.begin(),nums2.end());
                j++;
            }
        }
        while(j<m+n&&k<n){
            nums1[j]=nums2[k];
            j++;
            k++;
        }    
    }
};