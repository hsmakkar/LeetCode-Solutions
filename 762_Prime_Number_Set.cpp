int count(int n)
{
    int c=0;
    while(n)
    {
        int d=n%2;
        if(d==1)
            c++;
        n=n/2;
    }
    return c;
}
bool isPrime(int n) 
{ 
    // Corner cases 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    // This is checked so that we can skip  
    // middle five numbers in below loop 
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
}
class Solution {
public:
    int countPrimeSetBits(int L, int R) {
        int c=0;
        for(int i=L;i<=R;i++)
        {
            if(isPrime(count(i)))
                c++;
        }
        return c;
    }
};
