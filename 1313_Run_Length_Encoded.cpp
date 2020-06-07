class Solution {
public:
    vector<int> decompressRLElist(vector<int>& a) {
        vector<int>v;
        int i;
        for(i=0;i<a.size();i+=2)
        {
            int val=a[i+1];
            int freq=a[i];
            for(int j=0;j<freq;j++)
                v.push_back(val);
        }
        return v;
        
    }
};
