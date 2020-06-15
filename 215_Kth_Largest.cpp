class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=nums.size()-1;
        if(k==1)
            return nums[nums.size()-1];
        int c=1;
        while(c!=k)
        {
            i--;
            c++;
        }
        return nums[i];
        
    }
};
