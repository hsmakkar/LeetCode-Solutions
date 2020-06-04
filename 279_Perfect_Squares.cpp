class Solution {
public:
    int numSquares(int n) {
        if(n<=3)
            return n;
        int c=sqrt(n);
        if(c*c==n)
            return 1;
        int mx=n;
        int i,j;
        int dp[n+1];
        for(i=0;i<=n;i++)
            dp[i]=INT_MAX;
        dp[0]=0;dp[1]=1;dp[2]=2;dp[3]=3;
        
        for(i=4;i<=n;i++)
        {
            for(j=1;j<=sqrt(i);j++)
            {
                int d=1+dp[i-(j*j)];
                if(d<dp[i])
                    dp[i]=d;
            }
        }
        return dp[n];
        
        
    }
};
