class Solution {
public:
    int numTrees(int n) {
        if(n==0||n==1)
            return 1;
        int a[n+1];
        memset(a,0,sizeof(a));
        a[0]=1;a[1]=1;
        int i,j;
        for(i=2;i<=n;i++)
        {
            for(j=0;j<i;j++)
            {
                a[i]+=a[j]*a[i-j-1];
            }
        }
        return a[n];
        
    }
};
