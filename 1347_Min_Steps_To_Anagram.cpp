class Solution {
public:
    int minSteps(string s, string t) {
        int a[26],b[26];
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        int i;
        for(i=0;i<s.size();i++)
        {
            a[s[i]-'a']++;
            a[t[i]-'a']--;
        }
        int c=0;
        for(i=0;i<26;i++)
        {
            if(a[i]<0)
                c+=abs(a[i]);
        }
        return c;
        
    }
};
