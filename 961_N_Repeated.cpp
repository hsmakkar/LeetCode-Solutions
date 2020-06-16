class Solution {
public:
    int repeatedNTimes(vector<int>& a) {
        int b[10000];
        memset(b,0,sizeof(b));
        int i;

        for(i=0;i<a.size();i++)
        {
            b[a[i]]++;
            if(b[a[i]]==a.size()/2)
                break;
        }
        return a[i];
        
    }
};
