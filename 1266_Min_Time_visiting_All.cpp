int mn(int x1,int y1,int x2,int y2)
{
    int c=0;
    while(x1!=x2 || y1!=y2)
    {
        if(x1==x2)
        {
            if(y1>y2)
                y1--;
            else
                y1++;
        }
        else if(y1==y2)
        {
            if(x1>x2)
                x1--;
            else
                x1++;
        }
        else if(x1>x2 && y1>y2)
        {
            x1--;y1--;
        }
        else if(x1>x2 && y1<y2)
        {
            x1--;y1++;
        }
        else if(x1<x2 && y1<y2)
        {
            x1++;y1++;
        }
        else if(x1<x2 && y1>y2)
        {
            x1++;y1--;
        }
        c++;
    }
    return c;
}
class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& p) {
        int s=0;
        
        int i;
        for(i=1;i<p.size();i++)
        {
            int c=mn(p[i-1][0],p[i-1][1],p[i][0],p[i][1]);
            s+=c;
        }
        return s;
    }
};
