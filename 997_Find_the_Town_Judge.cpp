class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        int a[1001];
        int b[1001];
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        int i,j;
        for(i=0;i<trust.size();i++)
        {
            a[trust[i][1]]++;
            b[trust[i][0]]++;
        }
        int p=-1;
        for(i=1;i<=1000;i++)
        {
            if(a[i]==N-1 && b[i]==0)
            {
                if(p!=-1)
                    return -1;
                else
                {
                    p=i;
                    return p;
                }
            }
        }
        return -1;
    }
};
