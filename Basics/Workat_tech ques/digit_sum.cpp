#include<iostream>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
        int n;
        cin>>n;
		int ans=0;
		while(n!=0){
			int digit=n%10;
			ans+=pow(digit,2);
			n/=10;
		}
		cout<<ans<<endl;
	}
	return 0;
}