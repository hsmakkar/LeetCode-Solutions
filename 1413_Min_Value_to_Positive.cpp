class Solution {
public:
    int minStartValue(vector<int>& a) {
        int n=a.size();
        int i;int sum=0;int mn=INT_MAX;
        for(i=0;i<n;i++)
        {
            sum+=a[i];
            if(sum<mn)
                mn=sum;
        }
        if(mn>=0)
            return 1;
        return abs(mn)+1;
        
    }
};
