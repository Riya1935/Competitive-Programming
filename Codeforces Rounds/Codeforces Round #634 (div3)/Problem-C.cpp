#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
  {
           ll t;
           cin>>t;
           while(t--)
             {
                ll n;
                cin>>n;
                vector<long long> v;
                long long arr[n+1]={0};
                for(ll i=0; i<n; i++)
                  {
                          ll a;
                          cin>>a;
                          v.push_back(a);
                          arr[a]++;
                  }
               sort(v.begin(),v.end());
               long long x=distance(v.begin(),unique(v.begin(),v.begin()+n))-1;
               //long long z=x-1;
               sort(arr,arr+n+1);
               long long y=arr[n];
               //cout<<x<<"   "<<y<<"   ";
               if(x==y) cout<<x<<endl;
               if(x>y)  cout<<y<<endl;
               if(x<y && x>=(y-1))  cout<<x<<endl;
               if(x<(y-1))  cout<<x+1<<endl;
             }
  }
