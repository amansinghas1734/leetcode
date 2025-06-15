class Solution {
public:
    int maxDiff(int num) {
        string s=to_string(num);
        int i=0;
        char c='a';
        string a="";
        string b="";
        while(i<s.length()&&s[i]=='9'){
            a+='9';
            i++;
        }
        if(i<s.length()){
            c=s[i];
        }
        while(i<s.length()){
            if(s[i]==c){
                a+='9';
            }
            else{
                a+=s[i];
            }
            i++;
        }
        i=0;
        while(i<s.length()&&(s[i]=='1'||s[i]=='0')){
            b+=s[i];
            i++;
        }
        if(i>0){
            if(i<s.length()){
            c=s[i];
        }
        while(i<s.length()){
            if(s[i]==c){
                b+='0';
            }
            else{
                b+=s[i];
            }
            i++;
        }
        }
        else{
            if(i<s.length()){
            c=s[i];
        }
        while(i<s.length()){
            if(s[i]==c){
                b+='1';
            }
            else{
                b+=s[i];
            }
            i++;
        }
        }
        
        return stoi(a)-stoi(b);
    }
};

        
   