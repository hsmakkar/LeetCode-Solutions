class Solution {
public:
    int minCostClimbingStairs(vector<int>& a) {
        int n=a.size();
        int i;
        int b[n+1];
        memset(b,0,sizeof(b));
        b[0]=a[0];b[1]=a[1];
        for(i=2;i<=n;i++)
        {
            if(i==n)
            b[i]=min(b[i-1],b[i-2]);
            else
            {
                b[i]=min(b[i-1],b[i-2])+a[i];
            }
            
        }
        return b[n];
        
    }
};
