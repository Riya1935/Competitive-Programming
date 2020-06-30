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
          ll k=(n-1)/2;
          ll ans=0;
          for(ll i=1; i<=k; i++)
            {
                      ans=ans+8*(i*i);
            }
          cout<<ans<<endl;
       }
  }
