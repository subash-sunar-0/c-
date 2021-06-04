#include<iostream>
using namespace std;

template <class t>
t sum(t a, t b)
{
  return a+b;
}

int main()
{
  cout<<sum(5,4)<<endl;
  cout<<sum(5.2,4.4)<<endl;
  return 0;
}
