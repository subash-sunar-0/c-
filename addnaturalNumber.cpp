#include<iostream>
using namespace std;
int naturalSum(int n)
{
  if(n==1)
  {
    return 1;
  }
  else
  {
    return n+naturalSum(n-1);
  }
}

int main()
{
  int n;
  cin>>n;
  cout<<naturalSum(n);

  return 0;
}
