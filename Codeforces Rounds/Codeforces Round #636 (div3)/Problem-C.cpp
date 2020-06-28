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
                vll v(n);
                vll v1;
                fll0(i,n)
                  {
                      cin>>v[i];
                      if(i>=1)
                        {
                              if((v[i]>0 && v[i-1]<0) || (v[i]<0 && v[i-1]>0)) v1.pb(i);
                        }
                  }
               ll m=v1.size();
               if(m==0)
                 {
                      cout<<*max_element(v.begin(),v.end())<<endl;
                 }
               else {
               ll sum=0;
               for(ll i=0; i<=m; i++)
                 {
                    if(i==0){
                              //cout<<v1[i]<<endl;
                    ll x=*max_element(v.begin(),v.begin()+v1[i]);
                    //cout<<x<<endl;
                    sum=sum+x;
                    }
                    else if(i==m)
                       {
                              ll x=*max_element(v.begin()+v1[i-1],v.end());
                              //cout<<x<<endl;
                              sum=sum+x;
                       }
                    else
                       {
                           ll x=*max_element(v.begin()+v1[i-1],v.begin()+v1[i]);
                           sum=sum+x;
                       }
                 }
               cout<<sum<<endl;
                  
            }
            }
          return 0;
  }
