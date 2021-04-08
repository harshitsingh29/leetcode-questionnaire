//https://leetcode.com/problems/make-the-string-great/

string makeGood(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
           if(st.empty()){
               st.push(s[i]);
           } 
            else if(abs(s[i]-st.top())==32){
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        string s1;
        while(!st.empty()){
            s1.push_back(st.top());
            st.pop();
        }
        reverse(s1.begin(),s1.end());
        return s1;
    }
