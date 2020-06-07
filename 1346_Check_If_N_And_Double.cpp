int binarySearch(vector<int>arr, int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
  
        // If the element is present at the middle 
        // itself 
        if (arr[mid] == x) 
            return mid; 
  
        // If element is smaller than mid, then 
        // it can only be present in left subarray 
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
  
        // Else the element can only be present 
        // in right subarray 
        return binarySearch(arr, mid + 1, r, x); 
    } 
  
    // We reach here when element is not 
    // present in array 
    return -1; 
}
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int i;int n=arr.size();
        sort(arr.begin(),arr.end());
        for(i=0;i<n;i++)
        {
            int d=2*arr[i];
            if(binarySearch(arr,0,n-1,d)!=-1 && binarySearch(arr,0,n-1,d)!=i)
                return true;
        }
        return false;
    }
};
