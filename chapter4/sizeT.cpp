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
constexpr char nl = '\n';
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

int main(){
	fast_io;
	short x {32767}; //data type of short which stores a minimum of 2 byte or 16 bits of data
	cout << x << nl; //since 32767 is in range(its the max possible value) it gets printed out

	x+=5; //causes overflow(it wraps around to -32768 + 4
	cout << x << nl; //outputs -32764;
	

	/*
	 *WHY ISNT THE SIZE OF THE INTEGER TYPES FIXED??
	 *
	 *The reason for this is that in the early days of C which c++ is based off, computers were slow and
	 *performance was of the utmost concern. Hence the size of an integer was left open so that compiler 
	 *implementers could pick a size for int that performs best on the target computer architecture. That 
	 *way programmers could just use int without having to worry about whether they could be using something
	 *more performant, this sucks for modern standards tho
	 *
	 *
	 * ENTER THE FIXED-WIDTH INTEGER TYPES
		
	int8_t = signed 1 byte//treated like a signd char on most systems
	uint8_t = unsigned1byte //treated like a signed char on many systems
							//
	int16_t 2 bytes signed
	uint16_t 2 bytes unsigned

	int32_t 4 bytes signed
	uint32_t 4 bytes unsigned


	int64_t 8 bytes signed
	uint64_t 8 bytes unsigned

	


	
	 * */
	unsigned short val = 65535;
	cout << val << nl; //prints the current value

	cout << val++ << nl; //prints the current value then increments;
	cout << val; //this will print 0 as there was a wrap around
	return 0;
}


