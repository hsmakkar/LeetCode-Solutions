class Solution {
public:
     bool containzero(int n)
    {
        string str = to_string(n);
        for(int i = 0; i<str.size();i++)
            if(str[i]=='0') return true;
        return false;
    }
    vector<int> getNoZeroIntegers(int n) {
        for(int i=n-1;i>0;i--)
        {
            if(!containzero(i)&&!containzero(n-i))
                return {i,n-i};
        }
        return {-1,-1};
        
    }
};
