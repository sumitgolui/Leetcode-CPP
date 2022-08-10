class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if(s.length()==0){
            return true;
        }
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            else if(s[i]==')'){
                if(!st.empty() && st.top()=='(')
                st.pop();
                else{
                    return false;
                    break;
                }
            }
             else if(s[i]=='}'){
                if(!st.empty() && st.top()=='{')
                st.pop();
                else{
                    return false;
                    break;
                }
            }
             else if(s[i]==']'){
                if(!st.empty() && st.top()=='[')
                st.pop();
                else{
                    return false;
                    break;
                }
            }
            
            
        }
        if(!st.empty()){
            return false;
        }
        return true;
    }
};