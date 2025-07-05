class Solution {
public:
    int findLucky(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=1;
        for(int i=arr.size()-2;i>=0;i--){
            if(arr[i]==arr[i+1]){
                n++;
            }
            else{
                if(arr[i+1]==n){
                    return n;
                }
                n=1;
            }
        }
        if(arr[0]==n){
            return n;
        }
        return -1;
    }
};