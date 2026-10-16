class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        if(fruits.size()<3){
            return fruits.size();
        }
        int i=0,j=1;
        int a=0,b=-1;
        int ans=0;
        while(j<fruits.size()){
            if(fruits[j]!=fruits[a]){
                if(b==-1){
                    b=j;
                }
                else if(fruits[j]!=fruits[b]){
                    ans=max(ans,j-i);
                    if(a<b){
                        i=a+1;
                        a=j;
                    }
                    else{
                        i=b+1;
                        b=j;
                    }
                }
            }
            else{
                a=j;
            }
            if(b!=-1&&fruits[j]==fruits[b]){
                b=j;
            }
            j++;
        }
        ans=max(ans,j-i);
        return ans;
    }
};