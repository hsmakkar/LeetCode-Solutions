class Solution {
public:
    vector<int> twoSum(vector<int>& a, int sum) {
        map<int,int>m;
        int n=a.size();int i;
        vector<int>v;
        for(i=0;i<n;i++)
        {
            int com=sum-a[i];
            if(m.find(com)!=m.end())
            {
                v.push_back(i);
                v.push_back(m[com]);
                break;
            }
            m[a[i]]=i;
        }
        return v;
    }
};
