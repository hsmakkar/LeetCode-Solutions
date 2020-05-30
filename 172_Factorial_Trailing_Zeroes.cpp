class Solution {
public:
    int trailingZeroes(int n) {
        int c=0,i;
        for(i=1;i<=13;i++)
        {
            long long d=pow(5,i);
            c+=n/d;
        }
        return c;
    }
};
