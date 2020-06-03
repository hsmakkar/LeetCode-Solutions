class Solution {
public:
    int minSteps(int n) {
        if(n==1)
            return 0;
        if(n<=5)
            return n;
        int i,j;
        int a[n+1];
        for(i=0;i<=n;i++)
        a[i]=INT_MAX;
        for(i=0;i<=5;i++)
            a[i]=i;
        
        for(i=6;i<=n;i++)
        {
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    a[i]=min(a[j]+1+((i-j)/j),a[i]);
                }
            }
            if(a[i]==INT_MAX)
                a[i]=i;
        }
        return a[n];
        
                         
                         
        
    }
};
