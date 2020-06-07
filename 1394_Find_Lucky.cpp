class Solution {
public:
    int findLucky(vector<int>& arr) {
        int mx=-1;
        int i;
        map<int,int>m;
        for(i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->first==it->second)
            {
                if(it->first>mx)
                    mx=it->first;
            }
        }
        return mx;
        
    }
};
