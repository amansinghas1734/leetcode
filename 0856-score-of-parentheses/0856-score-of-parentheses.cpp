class Solution {
public:
    int scoreOfParentheses(string s) {
        int ans=0;
        stack<string> st;
        for(int i=0;i<s.length();i++){
            int c=0;
            if(s[i]=='('){
                st.push("(");
            }
            else{
                while(!st.empty()&&st.top()!="("){
                    c+=stoi(st.top());
                    st.pop();
                }
                st.pop();
                if(c==0){
                    st.push("1");
                }
                else{
                    st.push(to_string(2*c));
                }
            }
        }
        while(!st.empty()){
            ans+=stoi(st.top());
            st.pop();
        }
        return ans;
    }
};