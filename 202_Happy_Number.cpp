int sumsq(int n)
{
    int c=0;
    while(n)
    {
        int d=n%10;
        c+=(d*d);
        n=n/10;
    }
    return c;
}
class Solution {
public:
    bool isHappy(int n) {
        
        map<int,int>m;
        int p=0;
        while(m.find(n)==m.end())
        {
            int c=sumsq(n);
            if(c==1)
            {
                p=1;
                break;
            }
            m[n]++;
            n=c;
        }
        if(p==1)
            return true;
        else
            return false;
    }
};
