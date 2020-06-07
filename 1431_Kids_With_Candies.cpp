class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& a, int m) {
        int n=a.size();
        int i;
        int mx=INT_MIN;
        for(i=0;i<n;i++)
        {
            if(a[i]>mx)
                mx=a[i];
        }
        vector<bool>v;
        for(i=0;i<n;i++)
        {
            if(a[i]+m>=mx)
                v.push_back(true);
            else
                v.push_back(false);
        }
        return v;
        
        
    }
};
