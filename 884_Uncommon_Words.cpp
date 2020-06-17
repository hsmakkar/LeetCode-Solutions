class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        map<string,int>m;
        int i;
        string m1="";
        for(i=0;i<A.size();i++)
        {
            if(A[i]!=32)
                m1+=A[i];
            else
            {
                m[m1]++;
                m1="";
            }
        }
        m[m1]++;
        m1="";
           for(i=0;i<B.size();i++)
        {
            if(B[i]!=32)
                m1+=B[i];
            else
            {
                m[m1]++;
                m1="";
            }
        }
        m[m1]++;
        vector<string>v;
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second==1)
                v.push_back(it->first);
        }
        return v;
        
    }
};
