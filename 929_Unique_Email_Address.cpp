string com(string a)
{
    string s="";
    int i;
    for(i=0;i<a.size();i++)
    {
        if(a[i]=='.')
            continue;
        if(a[i]=='+' || a[i]=='@')
            break;
        else
            s+=a[i];
    }
    while(a[i]!='@')
    {
        i++;
    }
    while(i<a.size())
    {
        s+=a[i];i++;
    }
    return s;
}
class Solution {
public:
    int numUniqueEmails(vector<string>& e) {
        set<string>s;
        
        int i;
        for(i=0;i<e.size();i++)
        {
            string m=com(e[i]);
            s.insert(m);
        }
        return s.size();
    }
};
