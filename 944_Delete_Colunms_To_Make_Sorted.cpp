class Solution {
public:
    int minDeletionSize(vector<string>& a) {
        int i,j;
        int c=0;
        char prev;
        for(i=0;i<a[0].size();i++)
        {
            prev=a[0][i];
            for(j=1;j<a.size();j++)
            {
                if(a[j][i]<prev)
                {
                    c++;
                    break;
                }
                else
                    prev=a[j][i];
            }
            
        }
        return c;
        
        
    }
};
