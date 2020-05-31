class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0)
            return false;
        if(n==1)
            return true;
        while(n!=1)
        {
            int d=n%3;
            if(d!=0)
                return false;
            n=n/3;
        }
        return true;
        
    }
};
