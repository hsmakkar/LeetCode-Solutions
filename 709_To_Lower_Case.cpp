class Solution {
public:
    string toLowerCase(string s) {
        int i;
        for(i=0;i<s.size();i++)
        {
            if(s[i]>=65 && s[i]<=91)
                s[i]+=32;
        }
        return s;
    }
};
