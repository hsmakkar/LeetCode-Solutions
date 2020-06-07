string bin(int n)
{
    string s;
    while(n)
    {
        int d=n%2;
        if(d==1)
            s+=49;
        else
            s+=48;
        n=n/2;
    }
    reverse(s.begin(),s.end());
    return s;
}
int dec(string s)
{
    int i;int p=0;
    int c=0;
    for(i=s.size()-1;i>=0;i--)
    {
        p+=(s[i]-48)*pow(2,c);
        c++;
    }
    return p;
}
class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)
            return 1;
        else if(n==1)
            return 0;
        string s=bin(n);
        string s2;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==49)
                s2+=48;
            else
                s2+=49;
        }
        int p=dec(s2);
        return p;
    }
};
