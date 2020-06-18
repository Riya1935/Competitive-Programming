//Question Link : https://codeforces.com/contest/1311/problem/A

//My solution

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
#define vvll vector<vector<long long>
int main()
  {
            ll t;
            cin>>t;
            while(t--)
              {
                      ll a,b;
                      cin>>a>>b;
                      if(a==b)  cout<<"0"<<endl;
                      else if(a<b)
                       {
                                 ll x=a-b;
                                 if(x%2!=0)  cout<<"1"<<endl;
                                 else cout<<"2"<<endl;
                       }
                     else
                       {
                                 ll x=b-a;
                                 if(x%2==0)  cout<<"1"<<endl;
                                 else cout<<"2"<<endl;
                       }
              }
  }
