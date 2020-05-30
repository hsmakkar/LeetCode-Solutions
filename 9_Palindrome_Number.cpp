class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0||x>INT_MAX)
            return false;
        int c=x;int s=0;
        while(c)
        {
            int d=c%10;
            s=s*10+d;
            c=c/10;
        }
        return s==x;
        
    }
};
