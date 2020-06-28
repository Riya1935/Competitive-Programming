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
ll power(ll k)
  {
      ll p=1;
      fll0(i,k)
         {
              p=p*2;
         }
      return p-1;
  }
ll f(ll n)
   {
       ll k=2;
       while(1)
         {
                if(n%power(k)==0)  return n/power(k);
                else k++;
         }
   }
int main()
  {
          ll t;
          cin>>t;
          while(t--)
            {
                ll n;
                cin>>n;
                cout<<f(n)<<endl;
            }
          return 0;
  }
