class Solution {
public:
    int dominantIndex(vector<int>& a) {
        int i;int mx=INT_MIN;
        int n=a.size();int mxind=-1;
        for(i=0;i<n;i++)
        {
            if(a[i]>mx)
            {
                mx=a[i];
                mxind=i;
            }
            
        }
        for(i=0;i<n;i++)
        {
            if(a[i]!=mx && a[i]*2>mx)
                return -1;
        }
        return mxind;
    }
};
