#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int x,m,d;
    cin>>x>>m>>d;

    cout<<min((m*x),d+x)<<endl;

  }


  return 0;
}
