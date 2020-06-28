#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
int32_t main()
   {
             int t;
             cin>>t;
             while(t--)
               {
                       int n,m;
                       cin>>n>>m;
                       cout<<"W";
                       for(int i=1; i<m; i++)
                          {
                                    cout<<"B";
                          }
                       cout<<endl;
                       for(int i=1; i<n; i++)
                         {
                                   for(int j=0; j<m; j++)
                                     {
                                               cout<<"B";
                                     }
                              cout<<endl;
                         }
                         
               }
   }
