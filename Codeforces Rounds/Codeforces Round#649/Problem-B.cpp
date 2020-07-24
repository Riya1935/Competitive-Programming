#include <bits/stdc++.h>
using namespace std;
#define ll long long 
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
                  ll n;
                  cin>>n;
                  vll v(n);
                  fll0(i,n)   cin>>v[i];
                  vll v1;
                  for(ll i=0; i<n-1; i++)
                    {
                        if(i==0)  v1.pb(v[i]);
                        else if((v[i]>v[i-1] && v[i]>v[i+1]) || (v[i]<v[i-1] && v[i]<v[i+1]))   v1.pb(v[i]);
                        
                    }
                 v1.pb(v[n-1]);
                 ll count=v1.size();
                 cout<<count<<endl;
                 fll0(i,count)   cout<<v1[i]<<" ";
                 cout<<endl;
              }
  }
