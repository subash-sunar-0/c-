#include<iostream>
#include<thread>

using namespace std;


void hello()
{
  cout<<"hello \n";
}
int main()
{
  std::thread t(hello);
  t.join();

  return 0;
}
