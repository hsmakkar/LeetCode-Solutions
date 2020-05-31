class Solution {
public:
    int addDigits(int n) {
        if(n==0)
            return 0;
        int d;
        if(n%9==0)
        {
            d=9;
        }
        else
            d=n%9;
        return d;
    }
};
