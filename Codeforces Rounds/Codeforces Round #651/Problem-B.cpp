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
#define pll pair<ll,ll>
#define ull unsigned ll
int main()
  {
       ll t;
       cin>>t;
       while(t--)
            {
                      ll n;
                      cin>>n;
                      vll v(2*n);
                      ll even=0, odd=0;
                      vll O, E;
                      fll0(i,2*n)  {
                                cin>>v[i];
                                if(v[i]%2==0)  {even++; E.pb(i+1);}
                                else {odd++;  O.pb(i+1);}
                      }
                    if(even%2==0 && odd%2==0)
                      {
                              if(odd!=0)  {
                              for(ll i=0; i<E.size(); i=i+2)
                                {
                                          cout<<E[i]<<" "<<E[i+1]<<endl;
                                }
                              for(ll i=2; i<O.size(); i=i+2)
                                {
                                          cout<<O[i]<<" "<<O[i+1]<<endl;
                                }}
                              else  {
                                        for(ll i=2; i<E.size(); i=i+2)
                                {
                                          cout<<E[i]<<" "<<E[i+1]<<endl;
                                }
                              }
                                
                      }
                    else   {
                              for(ll i=1; i<E.size(); i=i+2)
                                 {
                                           cout<<E[i]<<" "<<E[i+1]<<endl;
                                 }
                               for(ll i=1; i<O.size(); i=i+2)
                                 {
                                           cout<<O[i]<<" "<<O[i+1]<<endl;
                                 }
                    }
            }
       
  }
