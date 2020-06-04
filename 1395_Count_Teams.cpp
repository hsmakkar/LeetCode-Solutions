class Solution {
public:
    int numTeams(vector<int>& a) {
        int c=0,j,i,k;
        int n=a.size();
         for(i=0;i<n-2;i++)
        {
            for(j=i+1;j<n-1;j++)
            {
                if(a[j]>a[i])
                {
                    for(k=j+1;k<n;k++)
                    {
                        if(a[k]>a[j])
                        {
                            //cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
                            c++;
                        }
                    }
                }
                else if(a[j]<a[i])
                {
                      for(k=j+1;k<n;k++)
                    {
                        if(a[k]<a[j])
                        {
                            //cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
                            c++;
                        }
                    }

                }
            }
        }
        return c;
    }
};

#looking for O(n^2) solution this got accepted though
