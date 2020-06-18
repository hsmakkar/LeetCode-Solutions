class Solution {
public:
    bool canConstruct(string r, string mag) {
        map<char,int>m;
        int i;
        for(i=0;i<mag.size();i++)
        {
            m[mag[i]]++;
        }
        for(i=0;i<r.size();i++)
        {
            if(m.find(r[i])==m.end()||m[r[i]]==0)
                return false;
            else
                m[r[i]]--;
        }
        return true;
        
    }
};
