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
                string s;
                cin>>s;
                ll x,y;
                bool s1=false, s2=false;
                //cout<<"ram"<<endl;
                //cout<<s<<endl;
                fll0(i,n) 
                  {
                            if(s.at(i)=='1')  {s1=true; x=i; break;}
                  }
                for(ll i=n-1; i>=0; i--)
                  {
                          if(s.at(i)=='0')  {s2=true; y=i; break;}
                  }
                //cout<<"riya"<<endl;
                //cout<<s<<endl;
                if(s1==false || s2==false)  cout<<s<<endl;
                else  {
                          if(y<x)  cout<<s<<endl;
                          else {
                                    fll0(i,x)  cout<<s.at(i);
                                    for(ll i=y; i<n; i++)  cout<<s.at(i);
                                    cout<<endl;
                          }
                }
                 
             }
            
  }
