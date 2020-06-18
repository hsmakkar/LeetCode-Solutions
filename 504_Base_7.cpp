class Solution {
public:
    string convertToBase7(int num) {
        int p=0;
        if(num==0)
            return "0";
        if(num<0)
        {
            num*=-1;
            p=1;
        }
        string m="-";
        string s;
        while(num)
        {
            int d=num%7;
            s+=to_string(d);
            num=num/7;
        }
        reverse(s.begin(),s.end());
        if(p==0)
            return s;
        else
        {
            m+=s;
            return m;
        }
        
    }
};
