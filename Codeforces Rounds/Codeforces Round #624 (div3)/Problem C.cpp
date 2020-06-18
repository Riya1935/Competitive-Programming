// Question Link:  https://codeforces.com/contest/1311/problem/C

// My solution

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
                
                      ll n,m;
                      ll arr[26]={0};
                      cin>>n>>m;
                      string s;
                      cin>>s;
                      fll0(i,n)
                         {
                              ll x=(ll)s.at(i);
                              arr[x-97]++;
                         }
                      vll v(m);
                      fll0(i,m)  cin>>v[i];
                      sort(v.begin(),v.end());
                      fll0(i,n)
                         {
                              ll y=(ll)s.at(i);
                              ll x=v.end()-lower_bound(v.begin(),v.end(),i+1);
                              arr[y-97]=arr[y-97]+x;
                         }
                     
                     fll0(i,26)  cout<<arr[i]<<" ";
                     cout<<endl;
                 
            }
          return 0;
  }
