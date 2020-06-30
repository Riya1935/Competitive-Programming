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
ll min1(ll a, ll b, ll c)
  {
     ll temp=min(a,b);
     return min(temp,c);
  }
ll max1(ll a, ll b, ll c)
  {
      ll temp=max(a,b);
      return max(temp,c);
  }
int main()
   {
       ll t;
       cin>>t;
       while(t--)
         {
              string s;
              cin>>s;
              ll arr[3]={0};
              vll ans1, ans2, ans3;
              ll min_len=s.length();
              ll a=0;
              fll0(i,s.length())
                {
                     ll x=((ll)s.at(i))-48;
                     if(x==1)  ans1.pb(i);
                     if(x==2)  ans2.pb(i);
                     if(x==3)  ans3.pb(i);
                     arr[x-1]++;
                     if(arr[0]>0 && arr[1]>0 && arr[2]>0)
                       {
                           a++;
                           ll a1=ans1[ans1.size()-1];
                           ll a2=ans2[ans2.size()-1];
                           ll a3=ans3[ans3.size()-1];
                           ll length=(max1(a1,a2,a3)-min1(a1,a2,a3))+1;
                           if(length<min_len)  min_len=length;
                       }
                }
              if(a==0)  cout<<"0"<<endl;
              else  cout<<min_len<<endl;
              
         }
   }
