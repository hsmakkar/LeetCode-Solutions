class Solution {
public:
    vector<int> countBits(int num) {
        vector<int>m;
        int i;
        m.push_back(0);
        if(num==0)
            return m;
        m.push_back(1);
        for(i=2;i<=num;i++)
        {
            int c=m[i/2]+(i%2);
            m.push_back(c);
        }
        return m;
        
    }
};
