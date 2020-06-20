class Solution {
public:
    int balancedStringSplit(string a) {
        int r=0;
        int l=0;
        int c=0;
        int i;
        for(i=0;i<a.size();i++)
        {
            if(a[i]=='R')
                r++;
            else if(a[i]=='L')
                l++;
            if(r==l && r!=0 && l!=0)
            {
                c++;
                r=0;
                l=0;
            }
        }
        return c;
        
    }
};
