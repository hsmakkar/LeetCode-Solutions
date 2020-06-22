class Solution {
public:
    string getString(char x) 
{ 
    string s(1, x); 
  
    return s;    
}
    vector<string> commonChars(vector<string>& s) {
        int a[26],b[26];
        int i,j;
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        for(i=0;i<s[0].size();i++)
        {
            a[s[0][i]-97]++;
        }
        for(i=1;i<s.size();i++)
        {
            for(j=0;j<s[i].size();j++)
            {
                b[s[i][j]-97]++;
            }
            for(j=0;j<26;j++)
            {
                a[j]=min(a[j],b[j]);
            }
            memset(b,0,sizeof(b));
        }
        vector<string>v;
        for(i=0;i<26;i++)
        {
            if(a[i]!=0)
            {
                for(j=0;j<a[i];j++)
                {
                    char c=i+97;
                    string s=getString(c);
                    v.push_back(s);
                    
                }
            }
        }
        return v;
        
    }
};
