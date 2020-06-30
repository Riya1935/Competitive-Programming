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
ll add1(ll a1)
  {
      ll min=9, max=0;
      while(a1>0)
        {
              ll y=a1%10;
              a1=a1/10;
              if(y>max)  max=y;
              if(y<min)  min=y;
        }
     return max*min;
  }
int main()
  {
         ll t;
         cin>>t;
         while(t--)
           {
                     ll a1,k;
                     cin>>a1>>k;
                     ll s=k-1;
                     while(s--)
                       {
                           ll x=add1(a1);
                           if(x==0)  break;
                           a1=a1+x;
                       }
                    cout<<a1<<endl;
           }
  }
