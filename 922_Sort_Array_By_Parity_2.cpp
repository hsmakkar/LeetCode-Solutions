class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& a) {
        vector<int>ev,od;
        int i;
        for(i=0;i<a.size();i++)
        {
            if(a[i]%2==0)
                ev.push_back(a[i]);
            else
                od.push_back(a[i]);
        }
        int p=0;int m=0;
        for(i=0;i<a.size();i++)
        {
            if(i%2==0)
                a[i]=ev[p++];
            else
                a[i]=od[m++];
        }
        return a;
        
    }
};
