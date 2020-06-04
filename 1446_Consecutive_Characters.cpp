class Solution {
public:
    int maxPower(string s) {
        char c=s[0];
        int cur_max=1;
        int mx=INT_MIN;
        int i;
        for(i=1;i<s.size();i++)
        {
            if(s[i]==c)
                cur_max++;
            else
            {
                if(cur_max>mx)
                    mx=cur_max;
                
                c=s[i];
                cur_max=1;
            }
        }
        if(cur_max>mx)
            mx=cur_max;
        return mx;
        
    }
};
