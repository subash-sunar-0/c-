#include<iostream>

using namespace std;

int main(){
	int sum;
	int n;
	int i;
	int new_arr[i];
	cout <<"Enter a size of a array: " << endl;
	cin>> n;
	
	int arr[n];
	cout <<" Enter the element of array : "<< endl;
	
	for(i =0; i<n;i++){
		
		cin >> new_arr[i];
		
	}
	for(i=0;i<n;i++)
   {
    sum=sum+new_arr[i];
   }
   
	cout << "The sun of array is: " << sum << endl;
	

}


	
	
