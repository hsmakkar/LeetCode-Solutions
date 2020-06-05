class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if(nums.size()==0)
            return -1;
        int n=nums.size();
        int a[n],b[n];
        a[0]=nums[0];
        int i;
        for(i=1;i<n;i++)
        {
            a[i]=a[i-1]+nums[i];
        }
        b[n-1]=nums[n-1];
        for(i=n-2;i>=0;i--)
        {
            b[i]=b[i+1]+nums[i];
        }
        for(i=0;i<n;i++)
        {
            if(a[i]==b[i])
                return i;
        }
        return -1;
        
    }
};
