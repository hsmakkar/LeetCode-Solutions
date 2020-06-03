class Solution {
public:
    int maxSubArray(vector<int>& a){
    int n=a.size();
    int max_end_here=INT_MIN;
    int max_so_far=0;
    int i;
    for(i=0;i<n;i++)
    {
        max_so_far+=a[i];
        if(max_so_far>max_end_here)
        {
            max_end_here=max_so_far;
        }
        if(max_so_far<0)
        {
            max_so_far=0;
        }
    }
    return max_end_here;
        
    }
};
