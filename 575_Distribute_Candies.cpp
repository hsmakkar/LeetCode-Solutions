class Solution {
public:
    int distributeCandies(vector<int>& c) {
        map<int,int>m;
        int n=c.size();
        for(int i=0;i<n;i++)
        {
            m[c[i]]++;
        }
        if(n/2<m.size())
            return n/2;
        else
            return m.size();
        
    }
};
