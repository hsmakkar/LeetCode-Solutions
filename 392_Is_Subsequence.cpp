int count(string s1,string s2,int n,int m)
{
    int dp[n+1][m+1];
    int i,j;
    for(i=0;i<=m;i++)
    {
        dp[0][i]=0;
    }
    for(i=0;i<=n;i++)
    {
        dp[i][0]=0;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
            
        }
    }
    return dp[n][m];
}

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size();
        int m=t.size();
        int c=count(s,t,n,m);
        if(c==n)
            return true;
        else
            return false;
    }
};
