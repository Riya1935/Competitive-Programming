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
ll f(vll v, ll n, ll x)
   {
          ll sum=0;
          for(ll i=0; i<n; i++)
            {
                   sum=sum+v[i];
                   if(sum<((i+1)*x))  return i;
            }
          return n;
   }
int main()
   {
   	  ll t;
   	  cin>>t;
   	  while(t--)
   	    {
   	    	ll n,x;
   	    	cin>>n>>x;
   	    	vll v(n);
   	    	fl(i,n)
   	    	  {
   	    	     cin>>v[i];	 
   	    	  }
   	         sort(v.begin(),v.end(),greater<ll>());
   	         cout<<f(v,n,x)<<endl;
   	    }
   	  
   }
            
