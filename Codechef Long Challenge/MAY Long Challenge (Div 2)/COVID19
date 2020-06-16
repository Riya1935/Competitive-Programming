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
      if(x<0)  return -x;
      else return x;
  }
int main()
  {
      ll t;
      cin>>t;
      while(t--)
        {
            ll n;
            cin>>n;
            vll v(n);
            vll v1;
            fll0(i,n)  cin>>v[i];
            ll max1=0, count1=0;
            ll min1=n-1, count2=0;
            fll1(i,n)
              {
                  ll diff=mod(v[i]-v[i-1]);
                  v1.pb(diff);
              }
              
            fll0(i, v1.size())
              {
                  if(v1[i]>2)  {
                          count1=0;
                          if(count2<min1) min1=count2;
                          count2=0;}
                  else 
                    {
                        count2++;
                        count1++;
                        if(count1>max1)  max1=count1;
                    }
                if(i==v1.size()-1)
                   {
                       if(count2<min1)  min1=count2;
                   }
              }
            ll min;
            if(v1[0]>2 || v1[n-2]>2)  min=0;
            else min=min1;
            cout<<min+1<<" "<<max1+1<<"\n";
            
        }
  }
