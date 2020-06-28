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
ll mod(ll x)
  {
            if(x<0)   return -x;
            else return x;
  }
ll f(ll x, ll y, ll a, ll b)
   {
           ll d1=x-0;
           ll d2=y-0;
           if(d1==0 && d2==0)  return 0;
           if(d1*d2>0)
             {
                     d1=mod(d1);
                     d2=mod(d2);
                     if(d1==d2)
                       {
                                 return min(b*d1, a*(d1+d2));
                       }
                    else
                       {
                              ll diff=max(d1,d2)-min(d1,d2);
                              return min(a*(d1+d2), b*min(d1,d2)+a*diff);
                       }
             }
          if(d1*d2<0)
                  {
                      d1=mod(d1);
                      d2=mod(d2);
                      return a*(d1+d2);
                  }
          if(d1*d2==0)
               {
                         d1=mod(d1);
                         d2=mod(d2);
                         ll diff=max(d1, d2);
                         return a*diff;
               }
           
   }
int main()
   {
       ll t;
       cin>>t;
       while(t--)
          {
                    ll x,y;
                    cin>>x>>y;
                    ll a,b;
                    cin>>a>>b;
                    
                    cout<<f(x,y,a,b)<<endl;
          }
   }
