#include <iostream>
using namespace std;

string is_palindrome(int n)
{
    // Code here.
    string x = to_string(n);
    string result;
    int L = x.length();
    for (int i = 0; i < L; i++)
    {
        if (x[i] == x[L - i - 1])
        {
            result = "Yes";
        }
        else
        {
            result = "No";
        }
    }
    return result;
}

int main()
{
    int a = 55555;
    cout << is_palindrome(a);

    return 0;
}