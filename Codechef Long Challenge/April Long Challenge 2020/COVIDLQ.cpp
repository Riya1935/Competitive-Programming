#include <bits/stdc++.h>
using namespace std;
#define int long long
bool f(vector<int> v)
    {
       int min=6;
       for(int i=1; i<v.size(); i++ )
          {
            if(v.at(i)-v.at(i-1)<min) return false;  
          }
        return true;
    }
int32_t main()
   {
       int t;
       cin>>t;
       while(t--)
          {
              int n;
              cin>>n;
              vector<int> v;
              for(int i=0; i<n; i++)
                {
                    int a;
                    cin>>a;
                    if(a==1) v.push_back(i+1);
                }
             if(f(v))  cout<<"YES"<<endl;
             else cout<<"NO"<<endl;
          }
   }
