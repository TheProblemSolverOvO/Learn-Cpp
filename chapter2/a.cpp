#include <iostream>
#include <string>

using namespace std;

int main(){
  int count = 0;
  cin >> count;
  string space = "";

  for(int i = 0; i < count; i++){
    cout << space << i;
    space = " ";
  }

  return 0;
}
