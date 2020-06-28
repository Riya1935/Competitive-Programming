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
                ll x=n/2;
                if(x%2!=0)  cout<<"NO"<<endl;
                else
                   {
                         cout<<"YES"<<endl;
                         fll1(i,x+1)  cout<<2*i<<" ";
                         fll0(i,x-1)  cout<<2*i+1<<" ";
                         cout<<2*x+x-1<<endl;
                   }
            }
          return 0;
  }
