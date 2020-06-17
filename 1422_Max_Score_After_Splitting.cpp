class Solution {
public:
    int maxScore(string s) {
        int n=s.size();
        int a[n];int b[n];
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        int i;
        if(s[0]==48)
        a[0]=1;
        for(i=1;i<n;i++)
        {
            if(s[i]==48)
                a[i]=a[i-1]+1;
            else
                a[i]=a[i-1];
        }
        if(s[n-1]==49)
            b[n-1]=1;
        for(i=n-2;i>=0;i--)
        {
            if(s[i]==49)
                b[i]=b[i+1]+1;
            else
                b[i]=b[i+1];
        }
        int mx=INT_MIN;
        for(i=0;i<n-1;i++)
        {
            int s=a[i]+b[i+1];
            if(s>mx)
                mx=s;
        }
        return mx;
        
    }
};
