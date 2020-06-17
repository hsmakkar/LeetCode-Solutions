class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& a) {
        int n=a.size();
        int i;
        for(i=0;i<n;i++)
        {
            int x=abs(a[i]);
            x--;
            if(a[x]>=0)
                a[x]*=-1;
    
        }
        vector<int>v;
        for(i=0;i<n;i++)
        {
            if(a[i]>0)
                v.push_back(i+1);
        }
        return v;
        
    }
};
