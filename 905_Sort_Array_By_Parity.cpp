class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& a) {
        
        vector<int>v;
        int i;
        for(i=0;i<a.size();i++)
        {
            if(a[i]%2==0)
                v.push_back(a[i]);
        }
        for(i=0;i<a.size();i++)
        {
            if(a[i]%2!=0)
                v.push_back(a[i]);
        }
        return v;
        //Inplace solution better   
    }
};
