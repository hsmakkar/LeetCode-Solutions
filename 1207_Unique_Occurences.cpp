class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>m,m1;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        for(auto it=m.begin();it!=m.end();it++)
        {
            m1[it->second]++;
        }
        for(auto it=m1.begin();it!=m1.end();it++)
        {
            if(it->second>1)
                return false;
        }
        return true;
    }
};
