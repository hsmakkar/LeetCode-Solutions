class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int p=0;
        char c;
        int i;
        for(i=0;i<s.size();i++)
        {
            if(s[i]!=t[i])
            {
                c=t[i];
                p=1;
                return c;
            }
        }
            return t[t.size()-1];
    }
};
#Above Approach is using Sorting

#Hashing Done Below
/*
class Solution {
public:
    char findTheDifference(string s, string t) {
        char c;
        map<char,int>m1,m2;
        int i;
        for(i=0;i<s.size();i++)
            m1[s[i]]++;
        for(i=0;i<t.size();i++)
            m2[t[i]]++;
        for(auto it=m2.begin();it!=m2.end();it++)
        {
            if(m1.find(it->first)==m1.end())
            {
                c=it->first;
                break;
            }
            else 
            {
                if(m1[it->first]!=m2[it->first])
                {
                    c=it->first;
                    break;
                }
            }
        }
        return c;
    }
            
};*/
