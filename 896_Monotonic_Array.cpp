class Solution {
public:
    bool isMonotonic(vector<int>& a) {
        vector<int>b=a;
        reverse(b.begin(),b.end());
        return (is_sorted(a.begin(),a.end())||is_sorted(b.begin(),b.end()));
        
    }
};
