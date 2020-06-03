class Solution {
public:
    double nthPersonGetsNthSeat(int n) {
    if(n==1)
    return 1;
    double x=double(1)/double(n);
    //cout<<x<<endl;
    double m=double(n-2)*(x/2);
    m+=x;
    return m;
        
    }
};
