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
            ll n,p;
            cin>>n>>p;
            ll v[n][n];
            ll r1=1, c1;
            ll r2, c2;
            ll sum1=0;
            for( c2=1; c2<=n; c2++)
              {
                  c1=c2;
                  ll sum=0;
                  for(r2=1; r2<=n; r2++)
                    {
                       ll x;
                       cout<<"1 "<<r1<<" "<<c1<<" "<<r2<<" "<<c2<<endl; 
                       cin>>x;
                       if(x>sum)  {v[r2-1][c2-1]=1; sum=sum+1;}
                       else v[r2-1][c2-1]=0;
                    }
               
              }
           
           
           cout<<"2"<<endl;
           fll0(i,n)
            {
                fll0(j,n)  cout<<v[i][j]<<" ";
                cout<<endl;
            }
          ll result;
          cin>>result;
          if(result==-1)  break;
        }
  }
