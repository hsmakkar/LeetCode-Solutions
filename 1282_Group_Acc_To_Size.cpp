class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& g) {
        map<int,vector<int>>m;
        vector<vector<int>>v;
        int i,j;
        for(i=0;i<g.size();i++)
        {
            m[g[i]].push_back(i);
            if(m[g[i]].size()==g[i])
            {
                v.push_back(m[g[i]]);
                m.erase(g[i]);
            }
        }
        return v;
        
    }
};
