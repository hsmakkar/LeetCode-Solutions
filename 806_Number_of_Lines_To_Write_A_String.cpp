class Solution {
public:
    vector<int> numberOfLines(vector<int>& w, string str) {
        int s=0;int c=0;
        int i;
        for(i=0;i<str.size();i++)
        {
            int m=w[str[i]-97];
            if(s+m>100)
            {
                c++;
                s=m;
            }
            else
            {
                s+=m;
            }
        }
        vector<int>v;
        v.push_back(c+1);
        v.push_back(s);
        return v;
        
    }
};
