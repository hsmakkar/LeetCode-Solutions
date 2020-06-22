class Solution {
public:
    string generateTheString(int n) {
        string s;int i;
        if(n==1)
            return "a";
        if(n%2==0)
        {
            for(i=0;i<n-1;i++)
                s+=97;
            s+=98;
        }
        else
        {
            for(i=0;i<n-2;i++)
                s+=97;
            s+=98;
            s+=99;
        }
        return s;
        
    }
};
