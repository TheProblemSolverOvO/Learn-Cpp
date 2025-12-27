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



//lesson is that the main is not always called first
//here we can see that since we have a global variable that calls a function.
//that function runs before main does.
int solve(){
	int val{};
	cout << "In solve() " << "\n";
	cout << "Enter a number";
	cin >> val;
	return val;
}

const int GLOBALVAR = solve();//observe that we can only call the function AFTER 
						//its definition...if we tried to initialze GLOBALVAR
						//ABOVE the definition of solve() we would have an err
int main(){
	cout << "In main\n";
	fast_io;
	cout << GLOBALVAR;
	return 0;
}


