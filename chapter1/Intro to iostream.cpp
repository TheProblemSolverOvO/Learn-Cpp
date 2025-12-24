#include <iostream>
#include <string>

int main(){
	int x{}, y{};
	std::cout << "Enter two numbers seperated by a space: ";

	std::cin >> x;
	std::string t;
	std::cout << "Initial value of string t " << t << "\n";
	std::cin >> t;
	std::cout << "You entered " << x << " and " << t <<  "\n";
	return 0;
}
