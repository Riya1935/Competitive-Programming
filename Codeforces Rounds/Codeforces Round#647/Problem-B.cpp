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
                  set<ll> s1;
                  ll x=0;
                  bool state=true;
                  fll0(i,n)
                    {
                         ll a;
                         cin>>a;
                         s1.insert(a);
                         if(a>x)  x=a;
                    }
                  for(ll i=1; i<=2*x; i++)
                   {
                          set<ll> s2;
                          set <ll> :: iterator it; 
                          for(it=s1.begin(); it!=s1.end(); ++it)
                            {
                                    ll x=(*it)^i;
                                    s2.insert(x);
                                    
                            }
                         if(s1==s2)  {cout<<i<<endl; state=false; break;}
                   }
                 if(state)  cout<<"-1"<<endl;
        }
  }
