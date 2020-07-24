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
            ll t;
            cin>>t;
            while(t--)
              {
                  ll n,x;
                  cin>>n>>x;
                  vll v(n);
                  fll0(i,n)   cin>>v[i];
                  vll v1(n), v2(n);
                  ll sum=0;
                  fll0(i,n)
                    {
                       sum=sum+v[i];
                       v1[i]=sum;
                    }
                 ll z1=n, z2=n;
                 ll max=0;
                fll0(i,n)
                  {
                      if(v1[i]%x!=0)  {
                                if(i+1>max)  max=i+1;
                      }
                  }
                 ll sum1=0;
                 reverse(v.begin(), v.end());
                 fll0(i,n)
                    {
                       sum1=sum1+v[i];
                       v2[i]=sum1;
                    }
               fll0(i,n)
                 {
                       if(v2[i]%x!=0)   {
                                 if(i+1>max)  max=i+1;}
                 }
                if(max==0)  cout<<"-1"<<endl;
                else cout<<max<<endl;
              }
  }
