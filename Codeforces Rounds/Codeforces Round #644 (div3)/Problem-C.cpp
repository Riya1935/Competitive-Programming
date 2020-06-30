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
                       ll even=0, odd=0;
                       vll v(n);
                       fll0(i,n) { cin>>v[i]; 
                                   if(v[i]%2==0)  even++;
                                   else odd++;}
                       sort(v.begin(), v.end());
                       vll ans;
                       fll1(i,n) 
                         {
                                 if(v[i]-v[i-1]==1)  {ans.pb(v[i]); ans.pb(v[i-1]);}
                         }
                       if(even%2==0 && odd%2==0)  cout<<"YES"<<endl;
                       else
                         {
                                   if(ans.size()>=2)  cout<<"YES"<<endl;
                                   else  cout<<"NO"<<endl;
                         }
               }
  }
