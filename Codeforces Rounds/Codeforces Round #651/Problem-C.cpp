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
#define pll pair<ll,ll>
#define ull unsigned ll
int main()
  {
       ll t;
       cin>>t;
       while(t--)
            {
                      ll n;
                      cin>>n;
                      if(n==1)  cout<<"FastestFinger"<<endl;
                      else if(n%2!=0)  cout<<"Ashishgup"<<endl;
                      else if(n==2)  cout<<"Ashishgup"<<endl;
                      else {
                             ll n1=n;
                             ll cnt1=0, cnt2=0;
                             while(n1%2==0)
                              {
                                        n1=n1/2;
                                        cnt1++;
                              }
                           if(n1==1)   cout<<"FastestFinger"<<endl;
                           else  {
                                    for(ll i=3; i<=sqrt(n1); i=i+2)
                                       {
                                            while(n1%i==0)
                                             {
                                                    cnt2++;
                                                    n1=n1/i;
                                             }
                                       }
                                       if(n1>1)  cnt2++;
                                       if(cnt1>1)   cout<<"Ashishgup"<<endl;
                                       else  {
                                                 if(cnt2==1)  cout<<"FastestFinger"<<endl;
                                                 else cout<<"Ashishgup"<<endl;
                                       }
                                       
                           }
                           
                      }
            }
       
  }
