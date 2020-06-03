class NumArray {
public:
    NumArray(vector<int>& nums) {
        int n=nums.size();
        sum.reserve(n+1);
        sum.push_back(0);
        int i;
        for(i=0;i<n;i++)
            sum.push_back(sum[i]+nums[i]);
    }
    
    void update(int i, int val) {
        int j;
        int x=sum[i+1]-sum[i];
        for(j=i+1;j<sum.size();j++)
        {
            sum[j]=sum[j]-x+val;
        }
    }
    
    int sumRange(int i, int j) {
        return sum[j+1]-sum[i];
        
    }
    private:
    vector<int>sum;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(i,val);
 * int param_2 = obj->sumRange(i,j);
 */
 
 #Looking for faster method
