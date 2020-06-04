class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mx=INT_MIN;
        int cur_max=0;
        int i;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
                cur_max++;
            else
            {
                if(cur_max>mx)
                    mx=cur_max;
                cur_max=0;
            }
        }
        if(cur_max>mx)
            mx=cur_max;
        return mx;
        
    }
};
