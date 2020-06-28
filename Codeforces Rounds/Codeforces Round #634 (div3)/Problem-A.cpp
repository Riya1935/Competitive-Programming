#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ld long double
#define pb push_back
#define fi(i,n) for(int i=0; i<n; i++)
#define fl(i,n) for(long long i=0; i<n; i++)
#define vll vector<long long>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvl vector<vector<long long>
#define pb push_back
int main()
  {
            ll t;
            cin>>t;
            while(t--)
              {
                        ll n;
                        cin>>n;
                        if(n%2==0)
                          {
                                    cout<<n/2-1<<endl;
                          }
                        else
                          {
                                    cout<<n/2<<endl;
                          }
              }
  }
