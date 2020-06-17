class Solution {
public:
    string frequencySort(string s) {
        map<char,int>m;
        multimap<int,char,greater<int>>m1;
        int i;
        for(i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        for(auto it=m.begin();it!=m.end();it++)
        {
            m1.insert(make_pair(it->second,it->first));
        }
        string s1;
        for(auto it1=m1.begin();it1!=m1.end();it1++)
        {
            for(int j=0;j<it1->first;j++)
                s1+=it1->second;
        }
        return s1;
        
    }
};
