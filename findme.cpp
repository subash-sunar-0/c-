#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,k;
  int i;
  cin>>n>>k;

  vector<int>v;
  for(i=0;i<n;i++)
  {
    int x;cin>>x;v.push_back(x);
  }

  for(i=0;i<n;i++)
  {
    if(v[i]==k)
    {
      cout<<1;
      break;
    }
  }
  if(i==n)
  {
    cout<<-1;
  }


  return 0;
}
