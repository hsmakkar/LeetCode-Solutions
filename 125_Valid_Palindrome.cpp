class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()==0)
            return true;
        int i;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string s1;
        for(i=0;i<s.size();i++)
        {
            if((s[i]>='a' && s[i]<='z')||(s[i]>='0' && s[i]<='9'))
                s1+=s[i];
        }
        string s2=s1;
        reverse(s2.begin(),s2.end());
        return s2==s1;
        
    }
};
