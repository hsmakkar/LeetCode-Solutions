class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int a[1001];int b[1001];
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        int i;
        if(target.size()!=arr.size())
            return false;
        for(i=0;i<arr.size();i++)
        {
            a[arr[i]]++;
            b[target[i]]++;
        }
        for(i=0;i<1001;i++)
        {
            if(a[i]!=b[i])
                return false;
        }
        return true;
        
    }
};
