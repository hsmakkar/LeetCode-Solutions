class Solution {
public:
    bool judgeCircle(string moves) {
        
         int k = 0,l=0;
        for(auto s : moves)
        {
            if(s == 'L')
                k++;
            if(s == 'R')
                k--;
            if(s == 'U')
                l++;
            if(s == 'D')
                l--;
        }
        return k == 0 && l == 0;
    }
};
