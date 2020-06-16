class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int li=0;int hi=A.size()-1;
        while(li<hi)
        {
            int mid=li+(hi-li)/2;
            if(A[mid]<A[mid+1])
                li=mid+1;
            else
                hi=mid;
        }
        return li;
    }
};
