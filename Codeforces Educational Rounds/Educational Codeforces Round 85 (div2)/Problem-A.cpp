#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
bool f(vector<vector<int>> v, int n)
    {     if(v.size()==1)
            {
                  if(v[0][0]>=v[0][1]) return true;
                  else return false;
            }
            else{
              for(int i=0; i<n-1; i++)
                 {
                       if(v[i][0]>v[i+1][0] || v[i][1]>v[i+1][1])  return false;
                       else if(v[i][1]>v[i][0])  return false;
                       else if((v[i+1][0]-v[i][0])<(v[i+1][1]-v[i][1]))  return false;
                 }
             return true;
            }
    }
int32_t main()
   {
             int t;
             cin>>t;
             while(t--)
               {
                         int n;
                         cin>>n;
                         vector<vector<int>>  v;
                         for(int i=0; i<n; i++)
                            {
                                 int p,c;
                                 cin>>p>>c;
                                 vector<int> v1;
                                 v1.pb(p);
                                 v1.pb(c);
                                 v.pb(v1);
                            }
                        if(f(v,n)) cout<<"YES"<<endl;
                        else cout<<"NO"<<endl;
               }
   }
