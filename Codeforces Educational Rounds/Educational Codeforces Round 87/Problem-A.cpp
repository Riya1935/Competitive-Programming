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
               ll a,b,c,d;
               cin>>a>>b>>c>>d;
               if(b>=a)  cout<<b<<endl;
               else
                 {
                        if(c<=d)  cout<<"-1"<<endl;
                        else
                          {
                              ll x=a-b;
                              ll y=c-d;
                              if(x%y==0) 
                                {
                                    ll n=x/y;
                                    cout<<b+n*c<<endl;
                                }
                              else
                                {
                                    ll n=(x/y)+1;
                                    cout<<b+n*c<<endl;
                                }
                          }
                 }
         }
   }
