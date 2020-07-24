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
            ll n;
            cin>>n;
            vll a(n);
            vll b(n);
            fll0(i,n)   cin>>a[i];
            fll0(i,n)   cin>>b[i];
            vll c(n);
            fll0(i,n)  c[i]=a[i];
            sort(c.begin(), c.end());
            bool state=true;
            fll0(i,n)
              {
                   if(a[i]!=c[i])  {state=false;  break;}
              }
           if(state)   cout<<"Yes"<<endl;
           else {
                     ll zero=0, one=0;
                     fll0(i,n)
                      {
                         if(b[i]==0)  zero++;
                         else one++;
                      }
                if(zero>0 && one>0)  cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
           }
       }
  }
