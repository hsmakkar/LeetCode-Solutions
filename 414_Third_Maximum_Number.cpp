class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int i;
        set<int,greater<int>>s;int mx=INT_MIN;
        for(i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
            if(nums[i]>mx)
                mx=nums[i];
        }
        
        if(s.size()<3)
            return mx;
        else
        {
            set<int,greater<int>>::iterator it;
            it=s.begin();
            it++;it++;
            int d=*it;
            return d;
        }
            
        
    }
};
