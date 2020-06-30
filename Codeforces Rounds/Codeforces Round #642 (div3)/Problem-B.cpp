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
          ll n,k;
          cin>>n>>k;
          vll v1(n), v2(n);
          fll0(i,n)    cin>>v1[i];
          fll0(i,n)    cin>>v2[i];
          sort(v1.begin(), v1.end());
          sort(v2.begin(), v2.end());
          ll sum=0;
          fll0(i,n)
            {
                 if(v1[i]<v2[n-1-i] && k>0)  {sum=sum+v2[n-1-i]; k--;}
                 else sum=sum+v1[i];
            }
          cout<<sum<<endl;
       }
  }
