class Solution {
public:
    bool isPowerOfTwo(int n) {
        int p=0;
        if(n==0)
            return false;
        if(ceil(log2(n))==floor(log2(n)))
        {
            p=1;
        }
        if(p==0)
            return false;
        else
            return true;
        
    }
};
