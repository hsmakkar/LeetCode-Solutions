
int climbStairs(int n){
    if(n<=2)
        return n;
    int *dp;
    dp=(int *)malloc((n+1)*sizeof(int ));
    dp[0]=0;dp[1]=1;dp[2]=2;
    int i;
    for(i=3;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];

}
