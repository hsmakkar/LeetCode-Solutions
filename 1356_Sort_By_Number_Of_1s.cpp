int numbits(int n)
{
    int c=0;
    while(n)
    {
        int d=n%2;
        if(d==1)
            c++;
        n=n/2;
    }
    return c;
}
bool sortby(int &a,int &b)
{
    if(numbits(a)==numbits(b))
        return a<b;
    else
        return numbits(a)<numbits(b);
}
class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),sortby);
        return arr;
    }
};
#Try Speed Optimization
