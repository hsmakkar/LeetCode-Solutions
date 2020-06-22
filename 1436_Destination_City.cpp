class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string,int>m;
        int i;
        for(i=0;i<paths.size();i++)
        {
            m[paths[i][0]]++;
        }
        string s;
        for(i=0;i<paths.size();i++)
        {
            if(m.find(paths[i][1])==m.end())
            {
                s=paths[i][1];
                break;
            }
        }
        return s;
        
    }
};
