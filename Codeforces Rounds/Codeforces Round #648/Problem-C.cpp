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
     ll n;
     cin>>n;
     vll a(n), b(n);
     map<ll, ll> map1;
     fll0(i,n)
       {
            cin>>a[i];
            map1.insert(pair<ll, ll>(a[i], i));
       }
    vll v;
    fll0(i,n)
      {
           cin>>b[i];
           if(map1[b[i]]>i)  v.pb((n-1-map1[b[i]])+i+1);
           else v.pb(i-map1[b[i]]);
      }
    ll freq=1, count=1;
    sort(v.begin(), v.end());
    fll1(i,v.size())
      {
      	  if(i==v.size()-1)  {
      	  	if(v[i]==v[i-1])  count++;
      	  	if(count>freq)  freq=count;
      	  	count=1;
      	  }
      	 else {
          if(v[i]==v[i-1])  count++;
          else  {
                    if(count>freq)  freq=count;
                    count=1;
          }}
      }
    cout<<freq<<endl;
  }
