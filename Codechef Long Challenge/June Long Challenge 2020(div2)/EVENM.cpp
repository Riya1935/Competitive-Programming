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
            ll a=1;
            for(ll i=1; i<=n; i++)
              {
                  if(i%2!=0)  {
                      fll0(j,n) {
                          cout<<a<<" ";
                          a=a+1;
                      }
                    cout<<endl;
                    a=a+n-1;
                  }
                 else  {
                     fll0(j,n)  {
                         cout<<a<<" ";
                         a=a-1;
                     }
                    cout<<endl;
                    a=a+n+1;
                 }
              }
        }
  }

