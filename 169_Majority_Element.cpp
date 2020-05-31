class Solution {
public:
    int majorityElement(vector<int>& a) {
        map<int,int>m;
        int i;int n=a.size();
        for(i=0;i<n;i++)
            m[a[i]]++;
        map<int,int>::iterator it;int p;
        for(it=m.begin();it!=m.end();it++)
        {
            if(it->second>n/2)
            {
                p=it->first;
                break;
            }
        }
        return p;
        
        
    }
};
