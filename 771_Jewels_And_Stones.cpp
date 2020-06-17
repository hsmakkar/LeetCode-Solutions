class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int i;
        map<char,int>m;
        for(i=0;i<J.size();i++)
            m[J[i]]++;
        int c=0;
        for(i=0;i<S.size();i++)
        {
            if(m.find(S[i])!=m.end())
                c++;
        }
        return c;
    }
};
