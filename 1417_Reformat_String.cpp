class Solution {
public:
    string reformat(string s) {
        string s1,s2,s3;
        int i;
        for(i=0;i<s.size();i++)
        {
            if(s[i]>='0' && s[i]<='9')
                s1+=s[i];
            else
                s2+=s[i];
        }
        int c=s1.size()-s2.size();
        c=abs(c);
        if(c>1)
            return "";
        else if(s1.size()>=s2.size())
        {
            for(i=0;i<s2.size();i++)
            {
                s3+=s1[i];
                s3+=s2[i];
            }
            if(s1.size()>s2.size())
            s3+=s1[i];
        }
        else
        {
             for(i=0;i<s1.size();i++)
            {
                s3+=s2[i];
                s3+=s1[i];
            }
            if(s2.size()>s1.size())
            s3+=s2[i];
        }
        return s3;
        
    }
};
