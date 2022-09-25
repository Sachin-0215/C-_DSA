#include<iostream>
using namespace std;

void printNumber(int m){

    m = 6;
    cout << "Printing number : " << m << endl;
    
    //return;//optional
}

int main()
{
    int num = 4;
    printNumber(num); // call by value or pass by vue
    cout << "In main function printing number " << num << endl;
    return 0;
}