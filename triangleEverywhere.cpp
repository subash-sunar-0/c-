#include<iostream>
using namespace std;

int main()
{
  int a,b,c;
  cin>>a>>b>>c;
  if((a<b+c)&&(b<a+c)&&(c<a+b))
  {
    if(a==b && a==c)
    {
      cout<<1;
    }
    else if(a==b && a!=c)
    {
      cout<<2;
    }
    else
    {
      cout<<3;
    }
  }
  else
  {
    cout<<-1;
  }

  return 0;
}
