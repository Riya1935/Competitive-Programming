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
ll f(ll a, ll b)
  {
     ll x=min(a,b);
     ll y=max(a,b);
     for(ll i=1;;i++)
       {
             if(i>=2*x && i>=y)  return i*i;
             if(i>=x+y)  return i*i;
             if(i>=2*y && i>=x) return i*i;
       }
  }
int main()
  {
            ll t;
            cin>>t;
            while(t--)
              {
                        ll a,b;
                        cin>>a>>b;
                        cout<<f(a,b)<<endl;
              }
  }
