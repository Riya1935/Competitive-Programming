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
            if(n<=3)  cout<<"-1"<<endl;
            else
              {
                    for(ll i=n; i>0; i--)
                      {
                          if(i%2!=0)  cout<<i<<" ";
                      }
                    cout<<"4 ";
                    for(ll i=2; i<=n; i++)
                      {
                                if(i%2==0 && i!=4)  cout<<i<<" ";
                      }
                    cout<<endl;
              }
        }
   }
