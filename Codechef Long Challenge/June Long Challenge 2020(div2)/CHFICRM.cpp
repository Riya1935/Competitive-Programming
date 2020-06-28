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
            vll v(n);
            fll0(i,n)   cin>>v[i];
            ll five=0, ten=0;
            //ll count=0;
            bool state=true;
            fll0(i,n)
              {
                  if(v[i]==5)  {
                      //count=count+1;
                      five=five+1;
                  }
                 else if(v[i]==10)  {
                     if(five>=1) {//count=count+1;
                                  five=five-1;
                                  ten=ten+1;
                     }
                     else {state=false; break;}
                 }
                else if(v[i]==15) {
                    if(ten>=1)  {
                        //count=count+1;
                        ten=ten-1;
                    }    
                   else if(five>=2)  {
                       //count=count+1;
                       five=five-2;
                   }
                  else  {state=false; break;}
                }
              }
        if(state)  cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        }
  }

