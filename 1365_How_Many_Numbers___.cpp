int first(vector<int>arr, int low, int high, int x, int n) 
{ 
    if(high >= low) 
    { 
        int mid = low + (high - low)/2; 
        if( ( mid == 0 || x > arr[mid-1]) && arr[mid] == x) 
            return mid; 
        else if(x > arr[mid]) 
            return first(arr, (mid + 1), high, x, n); 
        else
            return first(arr, low, (mid -1), x, n); 
    } 
    return -1; 
}
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>v;
        int n=nums.size();
        v=nums;sort(v.begin(),v.end());
        vector<int>a;
        for(int i=0;i<nums.size();i++)
        {
            int d=first(v,0,n-1,nums[i],n);
            a.push_back(d);
        }
        return a;
    }
};
