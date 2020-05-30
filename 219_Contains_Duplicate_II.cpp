#Looking for better Approach
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& a, int k) {
        map<int,int>m;
        int i;
        for(i=0;i<a.size();i++)
        {
            if(m.find(a[i])!=m.end() && abs(i-m[a[i]])<=k)
                return true;
            else
                m[a[i]]=i;
        }
        return false;
    }
};
