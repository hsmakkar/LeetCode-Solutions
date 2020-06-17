class Solution {
public:
    int findComplement(int n) {
        long long x=1;
        if(n==0)
            return 1;
        else if(n==1)
            return 0;
        while(x<n)
        {
            x=x*2;
        }
        if(x==n)
            return n-1;
        x--;
        n=n^x;
        return n;
    }
};
