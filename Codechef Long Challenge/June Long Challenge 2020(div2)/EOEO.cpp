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
            ll ts;
            cin>>ts;
            if(ts%2!=0)  cout<<(ts-1)/2<<endl;
            else  {
                ll s=ts;
                //cout<<s<<endl;
                while(s%2==0)  {
                    s=s/2;
                }
                //cout<<s<<endl;
                ll y=(ts/s)*2;
                //cout<<y<<endl;
                cout<<ts/y<<endl;
            }
        }
  }

