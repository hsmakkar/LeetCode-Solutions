class Solution {
public:
    string reverseVowels(string s) {
        string s1;
        int p=0,i;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='a'||s[i]=='i'||s[i]=='o'||s[i]=='e'||s[i]=='u'||
              s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='I'||s[i]=='U')
                s1+=s[i];
        }
        reverse(s1.begin(),s1.end());
        for(i=0;i<s.size();i++)
        {
             if(s[i]=='a'||s[i]=='i'||s[i]=='o'||s[i]=='e'||s[i]=='u'||
              s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='I'||s[i]=='U')
                s[i]=s1[p++];
        }
        return s;
        
    }
};
