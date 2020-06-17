class Solution {
public:
    int maxNumberOfBalloons(string text) {
   int arr[5] = {0};
        for(auto x : text)
        {
            if(x == 'b') arr[0]++; //frequency of b
            if(x == 'a') arr[1]++; //frequency of a
            if(x == 'l') arr[2]++; //frequency of l
            if(x == 'o') arr[3]++; //frequency of o
            if(x == 'n') arr[4]++; //frequency of n
        }
        int a = min(arr[0],min(arr[1],arr[4]));
        int b = min(arr[2]/2,arr[3]/2);
        return min(a,b);
        
        
    }
};
