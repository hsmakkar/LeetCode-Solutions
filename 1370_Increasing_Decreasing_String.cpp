class Solution {
public:
    string sortString(string s) {
        map<char,int>m;
        int i;
        for(i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        string s1;
        map<char,int>::iterator it;
        while(s1.size()!=s.size())
        {
            for(it=m.begin();it!=m.end();it++)
            {
                if(it->second!=0)
                {
                    s1+=it->first;
                    it->second--;
                }
            }
            it=m.end();it--;
            while(it!=m.begin())
            {
                if(it->second!=0)
                {
                    s1+=it->first;
                    it->second--;
                }
                it--;
            }
            if(it->second!=0)
            {
                s1+=it->first;
                it->second--;
            }
        }
        return s1;
        
        
    }
};
