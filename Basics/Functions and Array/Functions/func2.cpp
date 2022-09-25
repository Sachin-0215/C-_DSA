#include<iostream>
#include<math.h>
using namespace std;

void printSquare(int num){
    int i = 1;
    while(i<=num){
        cout << pow(i,2) << " ";
        i++;
    }
}
int main()
{
    int n;
    cin >> n;
    printSquare(n);
    return 0;
}

// void printSquare(int num){
//     int i = 1;
//     while(i<=num){
//         cout << pow(i,2) << " ";
//         i++;
//     }
// }
// func2.cpp: In function 'int main()':
// func2.cpp:16:5: error: 'printSquare' was not declared in this scope
//      printSquare(n);
//      ^~~~~~~~~~~

// Note - > Function is always declared above main function