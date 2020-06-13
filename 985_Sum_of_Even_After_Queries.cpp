class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& a, vector<vector<int>>& queries) {
        int cur=0;
        int i,n=a.size();
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
                cur+=a[i];
        }
        vector<int>b;
        for(i=0;i<queries.size();i++)
        {
            int ind=queries[i][1];
            int val=queries[i][0];
            if(a[ind]%2==0)
                cur-=a[ind];
            a[ind]+=val;
            if(a[ind]%2==0)
                cur+=a[ind];
            b.push_back(cur);
        }
        return b;
        
    }
};
