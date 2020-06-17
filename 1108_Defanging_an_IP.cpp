class Solution {
public:
    string defangIPaddr(string a) {
        string m="[.]";
        int i;
        string s;
        for(i=0;i<a.size();i++)
        {
            if(a[i]=='.')
                s+=m;
            else
                s+=a[i];
        }
        return s;
        
    }
};
