class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        int i;
        for(i=0;i<A.size();i++)
        {
            int d=A[i]*A[i];
            A[i]=d;
        }
        sort(A.begin(),A.end());
        return A;
        
    }
};
