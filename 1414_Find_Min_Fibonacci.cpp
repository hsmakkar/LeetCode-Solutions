class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        long long c=1;
        long long a[51];
        int i;a[0]=0;a[1]=1;a[2]=1;
        for(i=3;i<51;i++)
        {
            long long d=a[i-1]+a[i-2];
            a[i]=d;
        }
        int s=0;
        while(k!=0)
        {
            i=0;
            while(a[i]<=k)
            {
                i++;
            }
            k=k-a[i-1];
            s++;
        }
        return s;
    }
};
