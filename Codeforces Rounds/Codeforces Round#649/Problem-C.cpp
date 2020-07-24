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
            ll n;
            cin>>n;
            vll v(n);
            bool state=true, state1=true;
            fll0(i,n)   cin>>v[i];
            fll0(i,n)
              {
                    if(v[i]>i+1)  {
                              cout<<"-1"<<endl;
                              state=false;}
              }
           if(state)  
             {
                 vll v1(n);
                 fll0(i,n)  v1[i]=v[i];
                 sort(v1.begin(), v1.end());
                 fll0(i,n)  
                   {
                          if(v1[i]!=v[i])  {cout<<"-1"<<endl;
                                             state1=false;}
                   }
             }
           if(state && state1)
             { 
                 vll ans(n);
                 ans[0]=-1;
                 map<ll, ll> mp1;
                 fll0(i,n)   mp1[v[i]]=1;
                 fll1(i,n)
                   {
                         if(v[i]!=v[i-1])  {ans[i]=v[i-1];}
                         else ans[i]=-1;
                        
                   }
                ll a=0;
                fll0(i,n)
                  {        
                          if(ans[i]==-1)
                            {
                                 while(mp1[a]!=0)  a=a+1;
                                 ans[i]=a;
                                 a=a+1;
                            }
                  }
                fll0(i,n)   cout<<ans[i]<<" ";
                cout<<endl;
             }
  }
