class Solution {
public:
    int uniquePaths(int m, int n) {
    int a[m][n];
    memset(a,0,sizeof(a));
    int i,j;
    a[0][0]=1;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0 && j==0)
            a[i][j]=1;
            else
            {
                if(i==0)
                {
                    a[i][j]=a[i][j-1];
                }
                else
                {
                    if(j==0)
                    a[i][j]=a[i-1][j];
                    else
                    {
                        a[i][j]=a[i-1][j]+a[i][j-1];
                    }
                    
                }
                
                
            }
            
        }
    }
    return a[m-1][n-1];
        
    }
};
