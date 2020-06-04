bool isself(int n)
{
    int c=n;
    while(c)
    {
        int d=c%10;
        if(d==0)
            return false;
        if(n%d!=0)
            return false;
        c=c/10;
    }
    return true;
}
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>v;
        for(int i=left;i<=right;i++)
        {
            if(isself(i))
                v.push_back(i);
        }
        return v;
    }
};
