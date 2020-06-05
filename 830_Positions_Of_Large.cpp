class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>>v;
        int i;int count=1;
        for(i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1])count++;
            else
            {
                if(count>=3)
                    v.push_back({i-count,i-1});
                count=1;
            }
        }
        if(count>=3)
            v.push_back({i-count,i-1});
        return v;
        
    }
};
