#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ld long double
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
                       ll n,k;
                       cin>>n>>k;
                       if(k>=n)  cout<<"1"<<endl;
                       else 
                         {
                            ll min=n;
                            for(ll i=1; i<=sqrt(n); i++)
                              {
                                 if(n%i==0)
                                   {
                                        if(i<=k)  
                                          {
                                                    if((n/i)<min)  min=n/i;
                                          }
                                        if(n/i <=k)
                                          {
                                                  if(i<min)  min=i;
                                          }
                                   }
                              }
                              cout<<min<<endl;
                         }
               }
  }
