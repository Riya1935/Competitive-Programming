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
       ll s,n;
       cin>>n>>s;
       if(s>2*n)
         {
             cout<<"YES"<<endl;
             fll0(i,n-1)  cout<<"2"<<" ";
             cout<<s-(2*(n-1))<<endl;
             cout<<"1"<<endl;
         }
       else if(s==2*n)
          {
              cout<<"YES"<<endl;
              fll0(i,n)  cout<<"2 ";
              cout<<endl;
              cout<<"1"<<endl;
          }
       else   cout<<"NO"<<endl;
   }
