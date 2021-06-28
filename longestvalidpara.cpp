// link - https://leetcode.com/problems/longest-valid-parentheses/submissions/

class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.length();
        if(n==0 || n==1)
        {
            return 0;
        }
        else
        {
            stack<int>st;
            for(int i = 0;i < n; i++)
            {
                if(s[i]=='(')
                {
                    st.push(i);
                }
                else
                {
                    if(!st.empty())
                    {
                        s[st.top()] = s[i] = '*';
                        st.pop();
                    }
                }
            }
            int res = 0,curr = 0;
            for(int i = n-1;i>=0;i--)
            {
                if(s[i]=='*') curr++;
                else res = max(res,curr) , curr = 0;
            }
            return max(res,curr);
        }
    }
};

O(2n) - time
O(n) - space


