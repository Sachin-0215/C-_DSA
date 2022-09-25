#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	// your code goes here
	double p,r,t,si;
	cin>>p>>r>>t;
	si=(p*r*t)/100;
	cout<<fixed;
	cout<<setprecision(6)<<si;
	return 0;
}