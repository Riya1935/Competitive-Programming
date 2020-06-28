#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
bool compare(vector<int> A, vector<int> B, int n)
    {
              if(A.at(0)!=B.at(0))  return false;
              int one=0, minus=0;
              for(int i=0; i<n; i++)
                 {
                      if(B.at(i)>A.at(i) && !one) return false;
                      if(B.at(i)<A.at(i) && !minus) return false;
                      if(A.at(i)==1)  one++;
                      if(A.at(i)==-1) minus++;
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
                     vector<int> A,B;
                     for(int i=0; i<n; i++)
                        {
                                  int a;
                                  cin>>a;
                                  A.pb(a);
                        }
                     for(int i=0; i<n; i++)
                        {
                                  int b;
                                  cin>>b;
                                  B.pb(b);
                        }
                    if(compare(A,B,n)) cout<<"YES"<<endl;
                    else cout<<"NO"<<endl;
               }
   }
