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
                       vll v(n);
                       fll0(i,n)   cin>>v[i];
                       sort(v.begin(), v.end());
                       ll min=v[n-1]-v[n-2];
                       fll1(i,n)
                         {
                                   if(v[i]-v[i-1]<min)  min=v[i]-v[i-1];
                         }
                      cout<<min<<endl;
               }
  }
