class Solution {
public:
    vector<int> runningSum(vector<int>& a) {
        int n=a.size();
        vector<int>v;
        v.push_back(a[0]);
        for(int i=1;i<n;i++)
        {
            int s=a[i]+v[i-1];
            v.push_back(s);
        }
        return v;
        
    }
};
