class Solution {
public:
    int arrangeCoins(int n) {
        if(n<=1)
            return n ;
        int i,c=0;
        for(i=1;;i++)
        {
            if(n>=i)
            {
                n=n-i;
                c++;
            }
            else
                break;
        }
        return c;
        
    }
};
