#include <bits/stdc++.h>
using namespace std;
#define int long long
#define N 1000000007
int32_t main()
   {
   	  int t;
   	  cin>>t;
   	  while(t--)
   	    {
   	    	int n;
   	    	cin>>n;
   	    	vector<int> v(n),v1;
   	    	for(int i=0; i<n; i++)
   	    	   {
   	    	   	  cin>>v[i];
   	    	   }
   	    	sort(v.begin(),v.end(),greater<int>());
   	    	int sum=0;
   	    	for(int i=0; i<n; i++)
   	    	  {
   	    	      if(v.at(i)>i) 
   	    	        {
   	    	            sum=((sum%N)+((v.at(i)-i)%N))%N;
   	    	        }
   	    	  }
   	    	cout<<sum<<endl;
   	    }
   }
