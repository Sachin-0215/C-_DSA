#include <iostream>
using namespace std;

bool is_Palindrome(string input){
	for(int i=0;i<input.length();i++){
		if(input[i]!=input[input.length()-i-1]){
			return false;
		}
	}
	return true;
}

int main() {
	// your code goes here
	int T;
	string s1;
	cin>>T;
	while(T--){
		cin>>s1;
		if(is_Palindrome(s1))
			cout<<"True"<<endl;
		else
			cout<<"False"<<endl;
	}
	
	return 0;
}