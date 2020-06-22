string transform(string s)
{
            string a[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    
    int i;
    string m;
    for(i=0;i<s.size();i++)
    {
        int d=s[i]-97;
        m+=a[d];
    }
    return m;
    
}
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        int i;
        set<string>s;
        for(i=0;i<words.size();i++)
        {
            string m=transform(words[i]);
            s.insert(m);
        }
        return s.size();

        
        
    }
};
