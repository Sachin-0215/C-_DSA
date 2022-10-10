#include<iostream>
using namespace std;

/*
            1
          2 1 2
        3 2 1 2 3
      4 3 2 1 2 3 4
*/



int main()
{
    int n;
    cin >> n;
    for (int row = 1; row <= n;row++){

        for (int space = 1; space <= n - row;space++){
            cout << "  ";
        }

        for (int col = row; col >= 1;col--){
            cout << col << " ";
        }

        for (int col = 2; col <= row;col++){
            cout << col <<" ";
        }
        
        cout << endl;
    }
        return 0;
}
/*
n=4
        Debug : row =1 ,1<=4;
            s=1->2->3 1<=4-1 2<=4-1
            s++                                                               _ _ _ 1
            col=1 1>=1
            col=2 2<=1
            new line

            row=2 2<=4
            s=1->2->3->4 1<=n-1 2<=4-2
            s++                                                               _ _ _ 1
            col=2 2>=1                                                        _ _ 2 1 2 
                                                                              _ 3 2 1 2 3
                                                                              4 3 2 1 2 3 4
            col=2 <=1
            new lin




*/