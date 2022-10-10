#include<iostream>
using namespace std;

/*

* 
* * 
* * * 
* * * * 
* * * * *
* * * *
* * *
* *
*

*/

int main()
{
    int n;
    cin >> n;//3
    for (int row = 1; row < 2 * n;row++){     // 1   1<6    2 2<(2*3)    3 3<(2*3)   4 4<(2*3)   5 5<(2*3)
        int TCIR /*total col in row*/ = row > n ? 2 * n - row:row; // 1>3 1     2>3 2      3>3 3     4>3 (2*3)-4=2    5>3  (2*3)-5=1 
        for (int col = 1; col <= TCIR;col++){
            cout << "* ";
        }
        cout << endl;
    }

        return 0;
}

/*

*
* *
* * *
* *
* 

*/