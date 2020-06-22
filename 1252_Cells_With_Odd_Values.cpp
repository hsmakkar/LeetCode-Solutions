class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        vector<bool>N(n,false);
        vector<bool>M(m,false);
        int i;
        for(i=0;i<indices.size();i++)
        {
            N[indices[i][0]]= N[indices[i][0]] ^ true;
            M[indices[i][1]]= M[indices[i][1]] ^ true;
        }
        int r=0;int c=0;
        for(i=0;i<n;i++)
        {
            if(N[i])
                r++;
        }
        for(i=0;i<m;i++)
        {
            if(M[i])
            {
                c++;
            }
        }
        return r*m+c*n-2*r*c;
        
    }
};
