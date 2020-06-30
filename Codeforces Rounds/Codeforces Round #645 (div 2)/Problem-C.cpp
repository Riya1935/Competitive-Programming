#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ld long double
#define pb push_back
#define fi0(i,n) for(int i=0; i<n; i++)
#define fi1(i,n) for(int i=1; i<n; i++)
#define fll0(i,n) for(long long i=0; i<n; i++)
#define fll1(i,n) for(long long i=1; i<n; i++)
#define vll vector<long long>>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
int main()
  {
      ll t;
      cin>>t;
      while(t--)
        {
              ll x1, y1, x2, y2;
              cin>>x1>>y1>>x2>>y2;
              ll a=x2-x1;
              ll b=y2-y1;
              cout<<a*b+1<<endl;
        } 
  }
