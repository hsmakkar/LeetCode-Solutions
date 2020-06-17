class Solution {
public:
    string reverseOnlyLetters(string s) {
        string s1;
        int i;
        for(i=0;i<s.size();i++)
        {
            if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z'))
                s1+=s[i];
        }
        reverse(s1.begin(),s1.end());
        int p=0;
        for(i=0;i<s.size();i++)
        {
            if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z'))
                s[i]=s1[p++];
        }
        return s;
        
    }
};
