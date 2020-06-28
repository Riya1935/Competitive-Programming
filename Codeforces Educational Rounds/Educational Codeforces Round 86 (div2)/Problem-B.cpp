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
void f(string s)
   {
             ll l=s.length();
             if(l==1 || l==2)   {cout<<s<<endl; return;}
             if(count(s.begin(), s.end(),'0')==0 || count(s.begin(), s.end(), '1')==0)
                  {
                            cout<<s<<endl;
                            return;
                  }
             if(s.at(0)=='0')
                {
                     vll v1(2*l);
                             fll0(i,2*l)
                               {
                                   if(i%2==0)  v1[i]=0;
                                   else v1[i]=1;
                               }
                             fll0(i,2*l)  cout<<v1[i];
                             cout<<endl;
                             return;
                     
                }
          if(s.at(0)=='1')
              {
                   
                             vll v1(2*l);
                             fll0(i,2*l)
                               {
                                   if(i%2==0)  v1[i]=1;
                                   else v1[i]=0;
                               }
                             fll0(i,2*l)  cout<<v1[i];
                             cout<<endl;
                             return;
                        
                        
              }
   }
int main()
  {
            ll t;
            cin>>t;
            while(t--)
               {
                         string s;
                         cin>>s;
                         f(s);
               }
  }
