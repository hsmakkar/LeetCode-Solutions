class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>a(n);int i;
        if(n%2==0)
        {
            int c=1;
            for(i=0;i<n;i=i+2)
            {
                a[i]=c;
                a[i+1]=-c;
                c++;
            }
        }
        else
        {
            a[0]=0;
            int c=1;
            for(i=1;i<n;i+=2)
            {
                a[i]=c;
                a[i+1]=-c;
                c++;
            }
        }
        return a;
        
    }
};
