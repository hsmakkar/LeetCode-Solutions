class Solution {
public:
    int minAddToMakeValid(string s) {
        int i;
        stack<char>st;
        int c=0;
        for(i=0;i<s.size();i++)
        {
            if(st.empty() && s[i]==')')
                c++;
            else if(s[i]==')'  && !st.empty())
                st.pop();
            else if(s[i]=='(')
                st.push('(');
        }
        while(!st.empty())
        {
            c++;
            st.pop();
        }
        return c;
    }
};
