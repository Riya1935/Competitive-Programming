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
#define vvll vector<vector<long long>
int main()
  {
      ll t;
      cin>>t;
      while(t--)
        {
            ll n,k;
            cin>>n>>k;
            ll loss=0;
            fll0(i,n)
              {
                  ll a;
                  cin>>a;
                  if(a>k)  loss=loss+(a-k);
              }
            cout<<loss<<endl;
        }
  }
