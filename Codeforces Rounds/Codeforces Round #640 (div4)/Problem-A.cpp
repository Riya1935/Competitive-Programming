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
ll power(ll x, ll y)
   {
   	 ll p=1;
   	 fll0(i,y) p=p*x;
   	 return p;
   }
int main()
   {
      ll t;
      cin>>t;
      while(t--)
        {
                  string s;
                  cin>>s;
                  ll len=s.length();
                  if(len==1)  
                    {
                              cout<<"1"<<endl;
                              cout<<s<<endl;
                    }
                 else
                   {
                   	     if(count(s.begin(), s.end(),'0')==len-1)
                   	        {
                   	        	cout<<"1"<<endl;
                   	        	cout<<s<<endl;
                   	        }
                   	     else {
                         vll ans;
                         while(count(s.begin(), s.end(), '0')<len-1)
                           {
                                     for(ll i=len-1; i>=0; i--)
                                       {
                                                 if(s.at(i)!='0')
                                                   {
                                                        ll x=(ll)s.at(i)-48;
                                                        ans.pb(x*power(10,(len-1)-i));
                                                        s.at(i)='0';
                                                   }
                                       }
                           }
                       cout<<ans.size()<<endl;
                       
                       fll0(i,ans.size())
                         {
                            cout<<ans[i]<<" ";
                         }
                       cout<<endl;}
                   }
                  
        }
   }
