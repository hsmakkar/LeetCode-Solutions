class Solution {
public:
    vector<string> fizzBuzz(int n) {
        int i;
        vector<string>v;
        string s="Fizz";string s2="Buzz";string s3="FizzBuzz";
        for(i=1;i<=n;i++)
        {
            if(i%3==0 && i%5==0)
                v.push_back(s3);
            else if(i%3==0 && i%5!=0)
                v.push_back(s);
            else if(i%5==0 && i%3!=0)
                v.push_back(s2);
            else
                v.push_back(to_string(i));
        }
        return v;
        
    }
};
