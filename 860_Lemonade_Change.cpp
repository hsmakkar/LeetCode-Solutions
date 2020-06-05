class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fives=0;
        int tens=0;
        int twenty=0;
        int i;
        if(bills[0]!=5)
            return false;
        fives=1;
        for(i=1;i<bills.size();i++)
        {
            if(bills[i]==5)
                fives++;
            if(bills[i]==10)
            {
                if(fives==0)
                    return false;
                else
                {
                    fives--;
                    tens++;
                }
            }
            if(bills[i]==20)
            {
                if(tens>=1 && fives>=1)
                {
                    tens--;
                    fives--;
                    twenty++;
                }
                else if(fives>=3)
                {
                    fives-=3;
                    twenty++;
                }
                else
                    return false;
            }
        }
        return true;
    }
};
