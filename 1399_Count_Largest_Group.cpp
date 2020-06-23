int s(int n)
{
    int c=0;
    while(n)
    {
        int d=n%10;
        c+=d;
        n=n/10;
    }
    return c;
}
class Solution {
public:
    int countLargestGroup(int n) {
        int i;
        map<int,int>m;
        for(i=1;i<=n;i++)
        {
            int k=s(i);
            m[k]++;
        }
        int mx=INT_MIN;
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second>mx)
                mx=it->second;
        }
        int c=0;
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second==mx)
                c++;
        }
        return c;
    }
};
