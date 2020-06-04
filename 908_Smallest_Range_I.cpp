class Solution {
public:
    int smallestRangeI(vector<int>& a, int k) {
        int i;int mn=INT_MAX;int mx=INT_MIN;
        for(i=0;i<a.size();i++)
        {
            if(a[i]<mn)
                mn=a[i];
            if(a[i]>mx)
                mx=a[i];
        }
        mn=mn+k;
        mx=mx-k;
        if(mx-mn<=0)
            return 0;
        else
            return mx-mn;
        
    }
};
