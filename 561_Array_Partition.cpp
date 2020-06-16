class Solution {
public:
    int arrayPairSum(vector<int>& a) {
        int c=0;
        sort(a.begin(),a.end());
        int i;
        for(i=0;i<a.size();i+=2)
        {
            c+=a[i];
        }
        return c;
        
    }
};
