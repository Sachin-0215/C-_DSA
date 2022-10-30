#include <iostream>
using namespace std;

int reverseBits(int m)
{
    int result = 0;
    for (int i = 0; i < 32; i++)
    {
        int lsb = m & 1;
        // cout << lsb<<endl;
        int reverseLSB = lsb << (31-i);
        // cout << reverseLSB;
        result = result | reverseLSB;
        m >>= 1;//m=m>>1
    }
    return result;
}

int main()
{
    int n = 10;
    cout<<reverseBits(n);
    return 0;
}
