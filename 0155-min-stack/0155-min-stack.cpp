class MinStack {
private:
    stack<long long int> st;
public:
    long long int minVal=INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
            minVal=val;
            st.push(val);
            return;
        }
        if(val<minVal){
            st.push((long long)2*val-minVal);
            minVal=val;
        }
        else{
            st.push(val);
        }
               
    }
    
    void pop() {
        if(st.top()<minVal){
            minVal=2*minVal-st.top();
        }
        st.pop();
    }
    
    int top() {
        if(st.empty()){
            return -1;
        }
        if(st.top()<minVal){
            return minVal;
        }
        return st.top();

    }
    
    int getMin() {
        return st.empty() ? -1 : minVal; 
    }
};