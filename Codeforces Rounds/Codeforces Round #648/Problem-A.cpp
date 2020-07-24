#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define l long int
#define ld  long double
#define pb push_back
#define fi0(i,n) for(int i=0; i<n; i++)
#define fi1(i,n) for(int i=1; i<n; i++)
#define fll0(i,n) for(long long i=0; i<n; i++)
#define fll1(i,n) for(long long i=1; i<n; i++)
#define vll vector<long long>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
int main()
  {
     ll t;
     cin>>t;
     while(t--)
       {
              ll n,m;
              cin>>n>>m;
              ll v[n][m];
              fll0(i,n)
                {
                          fll0(j,m)  cin>>v[i][j];
                }
             vll rows;
             vll columns;
             fll0(i,n)
               {
                    ll a=0;
                    fll0(j,m)
                     {
                         if(v[i][j]==1)  a++;
                     }
                    if(a==0)  rows.pb(i);
               }
            fll0(i,m)
              {
                        ll b=0;
                       fll0(j,n)
                        {
                               if(v[j][i]==1)  b++;
                        }
                    if(b==0)  columns.pb(i);
              }
          ll x=min(rows.size(), columns.size());
          if(x%2==0)  cout<<"Vivek"<<endl;
          else cout<<"Ashish"<<endl;
       }
  }
