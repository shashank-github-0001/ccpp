#include <algorithm>
#include <iostream>
#include <string>

std::string addBinary(std::string, std::string);

int main() {
  std::string a = "1010";
  std::string b = "1011";
  std::cout << addBinary(a, b) << std::endl;
}

std::string addBinary(std::string a, std::string b) {
  int n = std::max(a.size(), b.size());
  a.insert(0, n - a.size(), '0');
  b.insert(0, n - b.size(), '0');
  std::string ans = "";
  bool carry = false;
  for (int i = n - 1; i >= 0; i--) {
    bool sum =
        (a[i] == '1' ? true : false) ^ (b[i] == '1' ? true : false) ^ carry;
    carry = (a[i] == '1' ? true : false) & (b[i] == '1' ? true : false) |
            ((a[i] == '1' ? true : false) & carry) |
            ((b[i] == '1' ? true : false) & carry);
    ans = (sum ? "1" : "0") + ans;
  }
  if (carry)
    ans = "1" + ans;
  return ans;
}
