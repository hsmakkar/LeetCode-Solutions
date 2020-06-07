int len(int n)
{
    int c=0;
    while(n)
    {
        c++;
        n=n/10;
    }
    return c;
}
class Solution {
public:
    int findNumbers(vector<int>& a) {
        int n=a.size();
        int c=0;
        int i;
        for(i=0;i<n;i++)
        {
            if(len(a[i])%2==0)
                c++;
        }
        return c;
    }
};
