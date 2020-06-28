#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ld long double
#define pb push_back
#define fi(i,n) for(int i=0; i<n; i++)
#define fl(i,n) for(long long i=0; i<n; i++)
#define vll vector<long long>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvl vector<vector<long long>
#define pb push_back
int main()
  {
            ll t;
            cin>>t;
            while(t--)
              {
                       ll n,a,b;
                       cin>>n>>a>>b;
                       vector<char> v;
                       int j=97;
                       if(a==b)
                         {
                               for(int i=0; i<n; i++)
                                 {
                                    if(i<26){
                                          v.pb((char)j);
                                          j++;}
                                    if(i>=26)
                                        {
                                            v.pb(v.at(i-26));
                                        }
                                 }
                              fi(i,n)
                                 {
                                 	cout<<v.at(i);
                                 }
                              cout<<endl;
                         }
                      else if(a>b)
                         {
                                for(int i=0; i<n; i++)
                                  {
                                       if(i<b) {v.pb((char)j); j++;}
                                       if(i>=b && i<a)  v.pb(v.at(b-1));
                                       if(i>=a)  v.pb(v.at(i-a));
                                  }
                                   
                              fi(i,n)
                                {
                                	cout<<v.at(i);
                                }
                            cout<<endl;
                         }
              }
  }
