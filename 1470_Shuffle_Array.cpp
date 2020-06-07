class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i=0;int j=n;
        vector<int>v;
        for(i=0;i<n;i++,j++)
        {
            v.push_back(nums[i]);
            v.push_back(nums[j]);
        }
        return v;
        
    }
};
