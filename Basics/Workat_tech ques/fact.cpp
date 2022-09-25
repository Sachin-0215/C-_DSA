#include<iostream>
using namespace std;

long long int factorial(long long int n){
	if(n<=0||n==1)
		return 1;
	long long int fact=1;
	for(int i=1;i<=n;i++){
		fact*=i;
	}
	return fact;
	
}
int main() {
	// your code goes here
	int T;
    cin >> T;
    while(T--){
		int m;
		cin>>m;
		cout<<factorial(m)<<endl;
	}
	return 0;
}