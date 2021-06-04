#include<iostream>
using namespace std;

int main()
{
  int t;
  cin>>t;

  for(int i=1;i<=t;i++)
  {
    for(int j=i;j<t;j++)
    {
      cout<<" ";
    }
    for(int j=1; j<=i; j++)
    {
      cout<<"*";
    }

    cout<<"\n";


  }

  return 0;
}
