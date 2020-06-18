class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& a) {
        int m=a.size();
        int n=a[0].size();
        int i,j,mx;
        vector<int>col,row;
        for(i=0;i<m;i++)
        {
            mx=INT_MIN;
            for(j=0;j<n;j++)
            {
                if(a[i][j]>mx)
                    mx=a[i][j];
            }
            row.push_back(mx);
        }
        for(i=0;i<n;i++)
        {
            mx=INT_MIN;
            for(j=0;j<m;j++)
            {
                if(a[j][i]>mx)
                    mx=a[j][i];
            }
            col.push_back(mx);
        }
        int c=0;
        for(i=0;i<row.size();i++)
        {
            for(j=0;j<col.size();j++)
            {
                int x=min(row[i],col[j]);
                if(a[i][j]<x)
                    c+=x-a[i][j];
                a[i][j]=x;
            }
        }
        return c;
        
    }
};
