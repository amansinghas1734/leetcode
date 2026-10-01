class Solution {
public:
    bool isValid(string s) {
        char to[s.length()+1];
        to[0]=',';
        int t=0,count=0;
        for(int i=0;i<s.length();i++){
            switch(s[i]){
                case '(':
                    to[++t]=s[i];
                    count+=1;
                    break;
                case '{':
                    to[++t]=s[i];
                    count+=1;
                    break;
                case '[':
                    to[++t]=s[i];
                    count+=1;
                    break;
                case ')':
                    if(to[t]=='('&&t>0){
                    t--;
                    count-=1;
                    break;}
                    else{
                        
                        return false;
                    }
                case '}':
                    if(to[t]=='{'&&t>0){
                    t--;
                    count-=1;
                    break;}
                    else{
                        
                        return false;
                    }
                case ']':
                    if(to[t]=='['&&t>0){
                    t--;
                    count-=1;
                    break;}
                    else{
                        
                        return false;
                    }
            }
            
        }
        if(count!=0){
                
                return false;
            }
            return true;
        
    }
};