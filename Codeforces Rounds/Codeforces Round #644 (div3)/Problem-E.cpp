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
                       ll n;
                       cin>>n;
                       vector<string> v;
                       fll0(i,n)
                         {
                                   string s;
                                   cin>>s;
                                   v.pb(s);
                         }
                      ll a=0;
                      fll0(i,n-1)
                        {
                              fll0(j,n-1)
                                {
                                    if(v[i].at(j)=='1')
                                      {
                                           if(v[i].at(j+1)!='1' && v[i+1].at(j)!='1') {a++; break;}
                                      }
                                }
                        }
                    if(a==0)  cout<<"YES"<<endl;
                    else cout<<"NO"<<endl;
               }
  }
