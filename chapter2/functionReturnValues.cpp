#include <iostream>

using namespace std;

//function 
int getValue(){
	int input{};
	cin >> input;
	return input;
}
int main(){
	int num{getValue()};
	cout << num << " + 7 is " << num + 7 << "\n";
	return 0;
}
