bool isper(int n)
{
    int d=sqrt(n);
    if(d*d==n)
        return true;
    else
        return false;
}
class Solution {
public:
    bool judgeSquareSum(int c) {
        if(isper(c))
            return true;
        int n=sqrt(c);
        int i;
        for(i=1;i<=n;i++)
        {
            int x=c-(i*i);
            if(isper(x))
                return true;
        }
        return false;
        
    }
};
