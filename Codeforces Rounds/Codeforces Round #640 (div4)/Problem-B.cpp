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
            ll n,k;
            cin>>n>>k;
            if(k>n)  cout<<"NO"<<endl;
            else {
            ll x=n/k;
            ld y=(ld)n/k;
            if(x==y)
              {
                        cout<<"YES"<<endl;
                        fll0(i,k)  cout<<n/k<<" ";
                        cout<<endl;
              }
           else
             {
                 ll diff1=max(x*k, n)-min(x*k, n);
                 ll diff2=max((x-1)*k, n)-min((x-1)*k, n);
                 //ll diff3=max((x+1)*k, n)-min((x+1)*k, n);
                 if(x>1 && diff1%2!=0 && diff2%2!=0)  cout<<"NO"<<endl;
                 else if(x==1 && diff1%2!=0 )  cout<<"NO"<<endl;
                 //else if(x==0 && diff3%2!=0)  cout<<"NO"<<endl;
                 else
                   {
                   	   cout<<"YES"<<endl;
                   	   if(diff1%2==0 && x>=1)
                   	     {
                   	     	ll sum=0;
                   	     	fll0(i,k-1)  {cout<<x<<" "; sum=sum+x;}
                   	     	cout<<max(sum,n)-min(sum,n)<<endl;
                   	     }
                   	  else if(diff2%2==0 && x>1)
                   	     {
                   	     	ll sum=0;
                   	     	fll0(i,k-1)  {cout<<x-1<<" "; sum=sum+x-1;}
                   	     	cout<<max(n, sum)-min(n, sum)<<endl;
                   	     }
                   	 /* else if(diff3%2==0)
                   	    {
                   	    	ll sum=0;
                   	    	fll0(i,k-1)  {cout<<x+1<<" "; sum=sum+x+1;}
                   	    	cout<<max(sum,n)-min(sum,n)<<endl;
                   	    }*/
                   }
                       
             }
            }
        }
   }
