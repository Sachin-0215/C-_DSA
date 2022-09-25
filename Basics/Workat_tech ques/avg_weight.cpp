#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float w1,w2,w3,w4,w5,w6,w7,w8,w9,w10;
	cin>>w1>>w2>>w3>>w4>>w5>>w6>>w7>>w8>>w9>>w10;
	float avg = (w1+w2+w3+w4+w5+w6+w7+w8+w9+w10)/10;
	cout<<fixed;
	cout<<setprecision(6)<<avg;
	
    return 0;
}