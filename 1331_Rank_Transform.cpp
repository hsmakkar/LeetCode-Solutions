class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>a;int i;
         for(int i =0;i<arr.size();i++){
            a.push_back(arr[i]);
        }
        sort(a.begin(),a.end());
        int rank=1;
        unordered_map<int,int>m;
        for(i=0;i<a.size();i++)
        {
            if(m.find(a[i])==m.end())
            {
                m[a[i]]=rank;
                rank++;
            }
        }
        for(i=0;i<a.size();i++)
        {
            a[i]=m[arr[i]];
        }
        
        return a;
    }
};
