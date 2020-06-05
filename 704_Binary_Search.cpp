int binary(vector<int>a,int l,int r,int x)
{
    if(l<=r)
    {
        int mid=l+(r-l)/2;
        if(a[mid]==x)
            return mid;
        else if(a[mid]<x)
            return binary(a,mid+1,r,x);
        else
            return binary(a,l,mid-1,x);
    }
    return -1;
}
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        return binary(nums,0,n-1,target);
    }
};
