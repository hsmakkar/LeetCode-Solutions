bool ver(int a,int b,int c)
{
    if(a+b>c && b+c>a && c+a>b)
        return true;
    else
        return false;
}
class Solution {
public:
    int largestPerimeter(vector<int>& a) {
        sort(a.begin(),a.end());
        int x,y,z,i;
        i=a.size()-1;
        while(i>=2)
        {
            x=a[i];y=a[i-1];z=a[i-2];
            if(ver(x,y,z))
                return (x+y+z);
            i--;
        }
        return 0;
        
    }
};
