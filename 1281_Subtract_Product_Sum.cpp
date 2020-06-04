class Solution {
public:
    int subtractProductAndSum(int n) {
        int s=0;
        int c=1;
        while(n)
        {
            int d=n%10;
            s+=d;
            c=c*d;
            n=n/10;
        }
        return c-s;
        
    }
};
