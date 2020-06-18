class Solution {
public:
    int evalRPN(vector<string>& t) {
        stack<int>s;
        int i;
        for(i=0;i<t.size();i++)
        {
            if(t[i]!="+" && t[i]!="-" && t[i]!="/" && t[i]!="*")
            {
                int d=stoi(t[i]);
                s.push(d);
            }
            else
            {
                int a=s.top();s.pop();
                int b=s.top();s.pop();
                if(t[i]=="+")
                    b=b+a;
                else if(t[i]=="-")
                    b=b-a;
                else if(t[i]=="*")
                    b=b*a;
                else
                    b=b/a;
                s.push(b);
            }
        }
        return s.top();
        
    }
};
