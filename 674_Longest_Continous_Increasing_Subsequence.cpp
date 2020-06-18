class Solution {
public:
    int findLengthOfLCIS(vector<int>& a) {
        if(a.size()==0)
            return 0;
        int n=a.size();
        int c=1;int mx=INT_MIN;
        for(int i=1;i<n;i++)
        {
            if(a[i]>a[i-1])
                c++;
            else
            {
                if(c>mx)
                    mx=c;
                c=1;
            }
        }
        if(c>mx)
            mx=c;
        return mx;
        
        
    }
};
