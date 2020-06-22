class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& a) {
        int j,i;
        for(i=0;i<a.size();i++)
        {
            for(j=0;j<a[i].size();j++)
            {
                if(a[i][j]==1)
                {
                    a[i][j]=0;
                }
                else
                {
                    a[i][j]=1;
                }
            }
            reverse(a[i].begin(),a[i].end());
            
        }
        return a;
    }
};
