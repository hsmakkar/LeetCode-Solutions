class Solution {
public:
    string removeDuplicates(string s) {
        string s2="";
        if(s.size()==0)
            return s2;
        stack<char>s1;
        int i;
        s1.push(s[0]);
        for(i=1;i<s.size();i++)
        {
            if(s1.empty()||s1.top()!=s[i])
                s1.push(s[i]);
            else
                s1.pop();
        }
        if(s1.empty())
            return s2;
        while(!s1.empty())
        {
            s2+=s1.top();
            s1.pop();
        }
        reverse(s2.begin(),s2.end());
        return s2;
        
    }
};
