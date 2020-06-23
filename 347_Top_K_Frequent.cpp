bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second > b.second); 
} 
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>v;
        vector<pair<int,int>>p;
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto it=m.begin();it!=m.end();it++)
        {
            p.push_back(make_pair(it->first,it->second));
        }
        sort(p.begin(),p.end(),sortbysec);
        for(int i=0;i<k;i++)
        {
            v.push_back(p[i].first);
        }
        return v;
        
    }
};
