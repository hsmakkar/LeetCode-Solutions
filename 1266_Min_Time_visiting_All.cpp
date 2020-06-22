
class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& p) {
        int s=0;
        
        int i;
        for(i=1;i<p.size();i++)
        {
            s+=max(abs(p[i-1][0]-p[i][0]),abs(p[i-1][1]-p[i][1]));
        }
        return s;
    }
};
