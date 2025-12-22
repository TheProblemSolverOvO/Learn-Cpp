#include <iostream>

using namespace std;


int main(){
	//different types of initialization
	//
	int a; //default initialization
	int b = 5; //copy initialization
			   //
	int c(6); //direct initialization
			   //
	//recommended types
	int d{7}; //direct - list -initialization
	int e{}; //value initialization - this sets e to 0 at allocation.
	
	int f = 6.4 //problem with this is that it sets f to 6 which we probably do not want, without warning us for
				//some compilers...however with direct-list - initializion it actually warns us
	int g{6.4}; //compiler throws an error
	cout << b << " " << c << " " << d;
}
