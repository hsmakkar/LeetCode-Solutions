bool sortby(const pair<int,int>&a,const pair<int,int> & b)
{
    return a.second>b.second;
}
class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        map<int,int>m;
        int i;
        vector<pair<int,int>>v;
        for(i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        for(auto it=m.begin();it!=m.end();it++)
        {
            v.push_back(make_pair(it->first,it->second));
        }
        sort(v.begin(),v.end(),sortby);
        int c=0;int s=0;
        for(i=0;i<v.size();i++)
        {
            c++;
            s+=v[i].second;
            if(s>=n/2)
                return c;
        }
        return m.size();
    }
};
