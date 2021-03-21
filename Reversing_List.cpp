#include<iostream>


int main(int argc, char const *argv[])
{
    const int size=8;
    int set[size]={5,10,15,20,25,30,35,40};
    int *numptr;
    int count;

    //make numpointer to set an array
    numptr= set;

    //use the pointer to sidplay the output
    std::cout<<"The number in set are:\n";
    for(count=0;count<size;count++){

        std::cout<<*numptr<<" ";
        numptr++;
    }
    
    //Display the array contentents in reverse order.
    std::cout<<"\nThe number in set backward are: \n";
    for ( count = 0;  count<size;count++)
    {
        /* code */
        numptr--;
        std::cout<<*numptr<<" ";
    }
    
    
    return 0;
}
