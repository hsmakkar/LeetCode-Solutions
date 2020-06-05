class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int c=0;
        int cur_sum=0;
        int i;
        for(i=0;i<nums.size();i++)
        {
            cur_sum+=nums[i];
            if(cur_sum==k)
                c++;
            
            if(m.find(cur_sum-k)!=m.end())
            {
                c+=m[cur_sum-k];
            }
            
            m[cur_sum]++;
        }
        return c;
        
    }
};
