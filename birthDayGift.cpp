#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--);
  {

    int n,k;
    int sum =0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }

    sort(arr,arr+n,greater<int>());

    if(t%2 !=0)
    {
      if(k==1)
      {
        cout<<arr[0];
      }
      else
      {
        for(int i=0;i<k;i++)
      }
    }
    else
    {

    }

    cout<<sum;

  }
  return 0;
}
