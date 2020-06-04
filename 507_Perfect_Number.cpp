class Solution {
public:
    bool checkPerfectNumber(int n) {
        if(n==0)
            return false;
        int i;int s=0;
        for(i=1;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                if(n/i==i)
                {
                    s+=i;
                }
                else
                {
                    s+=i;
                    s+=(n/i);
                }
            }
        }
        s-=n;
        if(s==n)
            return true;
        else
            return false;
        
    }
};
