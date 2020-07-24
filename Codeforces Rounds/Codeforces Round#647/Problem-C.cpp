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
                    unsigned long long int n;
                    cin>>n;
                    ll total_bits=((ll)log2(n))+1;
                    unsigned long long int i=0, ans=0;
                    while(i<total_bits)
                      {
                          unsigned long long x=pow(2,i);
                          ans=ans+(n/x);
                          i++;
                      }
                    cout<<ans<<endl;
          }
   }
