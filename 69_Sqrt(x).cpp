class Solution {
public:
    int mySqrt(int n) {
    if(n==0||n==1)
    return n;
    int start=1;int end=n;
    int ans;
    while(start<=end)
    {
        long long mid=(start+end)/2;
        if(mid*mid==n)
        return mid;
        if(mid*mid<n)
        {
            start=mid+1;
            ans=mid;
        }
        else
        {
            end=mid-1;
        }
        
    }
    return ans;
    }
};
