class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        map<string,vector<string>>m;
        int i,j;
        for(i=0;i<s.size();i++)
        {
            string d=s[i];
            sort(d.begin(),d.end());
            m[d].push_back(s[i]);
        }
        vector<vector<string>>v;
        map<string,vector<string>>::iterator it;
        for(it=m.begin();it!=m.end();it++)
        {
            v.push_back(it->second);
        }
        return v;
        
    }
};
