class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> st;
        string ans="";
        for(int i=0;i<s.length();i++){
            if(s[i]==')'){
                string temp="";
                while(st.top()!='('){
                    temp+=st.top();
                    st.pop();
                }
                st.pop();
                if(st.empty()){
                    ans+=temp;
                }
                else{
                    for(int i=0;i<temp.length();i++){
                        st.push(temp[i]);
                    }
                }
                continue;
            }
            else if(s[i]=='('){
                st.push(s[i]);
                continue;
            }
            if(!st.empty()){
                st.push(s[i]);
            }
            else{
                ans+=s[i];
            }
        }
        return ans;
    }
};