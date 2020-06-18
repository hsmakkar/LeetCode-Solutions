class Solution {
public:
    char nextGreatestLetter(vector<char>& l, char target) {
        int i;char p=' ';
        for(i=0;i<l.size();i++)
        {
            if(l[i]>target)
            {
                p=l[i];
                break;
            }
        }
        if(p==' ')
            return l[0];
        return p;
    }
};
//can be done in logn as well
