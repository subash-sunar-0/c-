#include<iostream>
using namespace std;
int main()
{
  int n;cin>>n;

  int arr[6][5]={{1,2,3,4,5},
          {10,9,8,7,6},
          {11,12,13,14,15},
          {20,19,18,17,16},
          {21,22,23,24,25},
          {30,29,28,27,26}};

for (auto& outer : arr)
{
    for (auto& inner : outer)
    {
        std::cout << inner << std::endl;
    }
    cout<<"\n";
}

  return 0;
}
