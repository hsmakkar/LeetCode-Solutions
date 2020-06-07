class Solution {
public:
    int busyStudent(vector<int>& a, vector<int>& b, int c) {
        int n=a.size();
        int i;int p=0;
        for(i=0;i<n;i++)
        {
            if(a[i]<=c && b[i]>=c)
                p++;
        }
        return p;       
    }
};
