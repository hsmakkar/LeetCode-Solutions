class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        int a[n];
        a[n-1]=arr[n-1];
        int i;
        for(i=n-2;i>=0;i--)
        {
            a[i]=max(a[i+1],arr[i]);
        }
        vector<int>v(n);
        for(i=0;i<n;i++)
        {
            if(i==n-1)
                v[i]=-1;
            else
                v[i]=a[i+1];
        }
        return v;
        
    }
};
