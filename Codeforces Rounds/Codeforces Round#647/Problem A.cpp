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
       ll t;
       cin>>t;
       while(t--)
         {
                   ll x,y;
                   cin>>x>>y;
                   if(x==y)   cout<<"0"<<endl;
                   else
                    {
                        ll a=max(x,y);
                        ll b=min(x,y);
                        if(a%b!=0)   cout<<"-1"<<endl;
                        else
                          {
                                 ll y=a/b;
                                 ll count=0;
                                 while(y%8==0)  {
                                           y=y/8;
                                           count=count+1;
                                 }
                                while(y%4==0)  {
                                          y=y/4;
                                          count=count+1;
                                }
                               while(y%2==0)  {
                                         y=y/2;
                                         count=count+1;
                               }
                              if(y==1)   cout<<count<<endl;
                              else   cout<<"-1"<<endl;
                          }
                    }
         }
  }
