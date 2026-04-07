class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto ch: tokens){
            if(ch=="+"||ch=="-"||ch=="*"||ch=="/"){
                int a=st.top(); st.pop();
                int b=st.top(); st.pop();
                int c=0;
                if(ch=="+"){
                    c=a+b;
                    st.push(c);
                }
                else if(ch=="-"){
                    c=b-a;
                    st.push(c);
                }
                else if(ch=="*"){
                    c=a*b;
                    st.push(c);
                }
                else{
                    c=b/a;
                    st.push(c);
                } 
                } else {
                st.push(stoi(ch));
            }
        }
        return st.top();
        
    }
};