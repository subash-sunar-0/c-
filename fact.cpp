#include<iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int k=0;
  int arr[n];
  int count=0;

  for(int i=1;i<=n;i++)
  {
    if(n%i==0)
    {
      arr[k]=i;
      count++;
      k++;
    }
  }

  cout<<count<<endl;
  for(int i=0;i<count;i++)
  {
    cout<<arr[i]<<" ";
  }

  return 0;
}
