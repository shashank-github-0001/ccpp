#include <sstream>
#include <vector>
#include <iostream>
using namespace std;


vector<int> parseInts(string str) {
  std::vector<int> integers;
  std::stringstream ss(str);
  int value;
  char chu;
  while(ss >> value) {
    integers.push_back(value);
    ss >> chu;
  }
  return integers;

}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}   
