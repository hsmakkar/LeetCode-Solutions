class Solution {
public:
    bool isPowerOfFour(int n) {
        int p=0;
        if(n==0)
            return false;
        if(n==1)
            return true;
        if(ceil(log2(n))==floor(log2(n)))
        {
            int d=ceil(log2(n));
            if(d%2==0)
                p=1;
        }
        if(p==0)
            return false;
        else
            return true;
    }
};
