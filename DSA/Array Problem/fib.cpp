#include <iostream>
using namespace std;

void fib(int m)
{
    int first = 1;
    int second = 1;
    int sum = 0;
    cout << first << " " << second<<" ";//1 1
    for (int i = 0; i < m-2; i++)
    {
        sum = first + second;//2 3 5 8 13
        cout << sum << " ";//2 3 5 8 13
        first = second;//1 2 3 5 8
        second = sum;//2 3 5 8 13
    }
}

// palindrome
bool is_Palindrome(string text){
    for (int i = 0; i < text.length() / 2;i++){
        if(text[i]!=text[text.length()-i-1]){
            return false;
        }
    }
    return true;
}

int main()
{
    // int n;
    // cin >> n;
    // fib(n);
    string t = "DSA";
    cout<<is_Palindrome(t);
    return 0;
}
