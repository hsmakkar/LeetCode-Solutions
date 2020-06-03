class Solution {
public:
    int longestPalindromeSubseq(string s) {
    int n=s.size();
    int i,j,l;
    int a[n][n];
    for(i=0;i<n;i++)
    a[i][i]=1;

    for(l=2;l<=n;l++)
    {
        for(i=0;i<n-l+1;i++)
        {
            j=i+l-1;
            if(s[i]==s[j] && l==2)
            a[i][j]=2;
            else if(s[i]==s[j])
            a[i][j]=a[i+1][j-1]+2;
            else
            {
                a[i][j]=max(a[i+1][j],a[i][j-1]);
            }
            
        }
    }
    return a[0][n-1];
        
    }
};
