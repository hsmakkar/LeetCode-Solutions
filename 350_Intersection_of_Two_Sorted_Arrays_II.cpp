#looking for Followup Questions
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int i;
        map<int,int>m,m1;
        for(i=0;i<nums1.size();i++)
        {
            m[nums1[i]]++;
        }
        for(i=0;i<nums2.size();i++)
        {
            m1[nums2[i]]++;
        }
        vector<int>v;
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(m1.find(it->first)!=m1.end())
            {
                int s=it->first;
                int d=min(it->second,m1[s]);
                for(i=0;i<d;i++)
                v.push_back(it->first);
            }
        }
        return v;
        
            
    }
};
