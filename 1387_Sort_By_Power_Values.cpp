int pw(int n)
{
    int c=0;
    while(n!=1)
    {
        if(n%2==0)
            n=n/2;
        else
            n=3*n+1;
        c++;
    }
    return c;
}
bool sortby(const int &a,const int &b)
{
    if(pw(a)==pw(b))
        return a<b;
    else 
        return pw(a)<pw(b);
}
class Solution {
public:
    int getKth(int lo, int hi, int k) {
        vector<int>v;
        for(int i=lo;i<=hi;i++)
        {
            v.push_back(i);
        }
        sort(v.begin(),v.end(),sortby);
        return v[k-1];
        
    }
};
