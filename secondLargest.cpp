#include<iostream>
using namespace std;

int main()
{
  int a , b,c;
  cin>>a;
  cin>>b;
  cin>>c;

if(a>b) {
    if(a>c) {
        if(b>c)
            cout<<c;
        else
            cout<<b;
    }
} else

{
    if(b>c) {
        if(c>a)
            cout<<a;
        else
            cout<<c;
    } else
        cout<<b;
}



  return 0;
}
