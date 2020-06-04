class Solution {
public:
    int longestPalindrome(string s) {
        int p=0,i;
        map<int,int>m;
        for(i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        int c=0;
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second%2==0)
                c+=it->second;
            else
            {
                c+=it->second-1;
                if(p==0)
                {
                    c+=1;
                    p=1;
                }
            }
        }
        return c;
        
    }
};
