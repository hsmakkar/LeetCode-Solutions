bool check(string s,string t)
{
    int i;
    if(t.size()>s.size())
        return false;
    for(i=0;i<t.size();i++)
    {
        if(s[i]!=t[i])
            return false;
    }
    return true;
    
}
class Solution {
public:
    int isPrefixOfWord(string s, string w) {
        vector<string>v;
        int i;
        string m="";
        for(i=0;i<s.size();i++)
        {
            if(s[i]!=32)
            {
                m+=s[i];
            }
            else
            {
                v.push_back(m);
                m="";
            }
        }
        v.push_back(m);
        int p=-1;
        for(i=0;i<v.size();i++)
        {
            if(check(v[i],w)==true)
            {
                p=i+1;
                break;
            }
        }
        return p;
        
    }
};
