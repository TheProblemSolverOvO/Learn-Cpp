#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <unordered_set>
#include <stack>
#include <tuple>
#include <cstring>
#include <map>
#include <unordered_map>
#include <numeric>
#include <string>
#include <cctype>
using namespace std;
#define fast_io ios::sync_with_stdio(false); cin.tie(0);
typedef long long ll; 

// use s.substr(1, 6) to start at position 1 and take 6 characters
//use stoi to convert from string to int you dummy. 
//use isupper, isdigit...they both work on char not str. 

//for(const auto& x : mp) cout << x.first << " " << x.second << endl;
//int minimum = min({a, b, c});
//use gcd(a, b) == __gcd(a, b); from the algorithm

//string stuff 
//// Use transform(s.begin(), s.end(), s.begin(), ::tolower); to lowercase a string
// Use transform(s.begin(), s.end(), s.begin(), ::toupper); to uppercase a string
void solve(){

}
/*
 * A value in programming is a single piece of data, i.e a single character, a number
 *
 *
 *A program is a collection of instructions that manipulate data to produce an end goal
 *
 * When values are called directly in the program without being assigned to anything they are called literals
 *
 * Observe from the literalPrint() function that literals are read only, they cannot be manipulated since they
 * have no identifier
 *
 *
 * Hence to manipulate any piece of data it must be identifiable;
 *
 *
 * We can say an object is that which is used to stoare a value in memory. A variable is an object that has a 
 * name(an identifier)
 *
 * we say that an object exists when memory has been allocated for the value it holds
 * */
//a function that prints literals(values that are placed directly into the source code)
void literalPrint(){
	cout << 5;
	cout << 'A';
	cout << -6.7;
	cout << "Hello World";
}

int main(){
	fast_io;
	//literalPrint();	//

	cout << sizeof(int) << " " <<  sizeof(double) << " " << sizeof(char);
	return 0;
}


