#include <iostream>
using namespace std;

int main()
{
	// your code goes here
	int n;
	cin >> n;
	int a;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a % 2 == 0)
			cout << "EVEN"<<endl;
		else
			cout << "ODD"<<endl;
	}

	return 0;
}