class Solution {
public:
    bool hasAlternatingBits(int n) {
        if(n<=2)
            return true;
        int d=n%2;
        int prev=d;
        n=n/2;
        while(n)
        {
            d=n%2;
            if(prev==d)
                return false;
            else
                prev=d;
            n=n/2;
        }
        return true;
        
    }
};
