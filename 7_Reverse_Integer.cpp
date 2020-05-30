class Solution {
public:
    int reverse(int x) {
        long long m=0;
        int p=0;
        if(x<0)
        {
            x=abs(x);
            p=1;
        }
        while(x)
        {
            int d=x%10;
            m=m*10+d;
            x=x/10;
        }
        if(m>INT_MAX||m<INT_MIN)
            return 0;
        else
        {
            if(p==1)
                return (-1*m);
            else
                return m;
        }
            
        
    }
};
