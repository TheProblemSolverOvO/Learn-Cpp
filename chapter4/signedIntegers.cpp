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
 *Signed Integers are integers that can take integer values and their signage(+-)
 *By default integers in c++ are signed, meaning the numbers sign is stored as part of the value
 *
 * This means that positive, negative and zero can be stored unlike Unsigned Integers which can only 
 * store non negative number;
 *
 * */


int main(){
	fast_io;
	// unsigned int val = -38492; results in undefined behaviour
	// cout << val; results in undefined behaviour as the unsigned int data type can only store non negatives
	

	//defining an integer variable that is based on 8 bits, recall that the smallest possible memory allocated
	//to a variable is 1 byte which is 8 bits.
	// this results in an error...indeed the type int8_t is treated as a character....not an integer
	//
	//
	//int8_t enoch{123};
	//cout << enoch;
	//
	int x{2147483647};
	cout << x << '\n';
	x++;
	cout << x << "\n";
	cout << (++(++(++(++(++x))))) << '\n';
	return 0;
}


