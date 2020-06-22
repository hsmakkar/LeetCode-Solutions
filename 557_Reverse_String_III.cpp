class Solution {
public:
    string reverseWords(string s) {
        int i;
        string m,m1;
        for(i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
                m+=s[i];
            else
            {
                reverse(m.begin(),m.end());
                m1+=m;
                m1+=' ';
                m="";
            }
        }
        reverse(m.begin(),m.end());
        m1+=m;
        return m1;
    }
};
