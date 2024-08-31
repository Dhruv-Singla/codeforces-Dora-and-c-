#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
       long long int n, m;
       cin>>n>>m;
       vector <long long int> a(n);
       for(long long int i = 0; i < n; i++)
       {
            cin>>a[i];
       }
       long long int max = INT_MIN;
       for(long long int i = 0; i < n; i++)
       {
            max = max > a[i] ? max : a[i];
       }
       
       for (long long int j = 0 ; j<m ;j++)
       {
            char c;
            cin>>c;
            long long int l,r;
            cin>>l>>r;
            if (c=='+')
            {
                if ((max>=l)&&(max<=r))
                {
                    cout<<max+1<<" ";
                    max++;
                }
                else
                {
                    cout<<max<<" ";
                }
            }
            else if (c=='-')
            {
                if ((max>=l)&&(max<=r))
                {
                    cout<<max-1<<" ";
                    max--;
                }

                else
                {
                    cout<<max<<" ";
                }
            }
            
            
       }
        cout<<endl;
    }
}