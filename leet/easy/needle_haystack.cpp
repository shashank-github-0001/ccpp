#include <iostream>
#include <string>

int strStr(std::string, std::string);

int main() {
  std::string haystack;
  std::string needle;
  std::cout << "give me haystack and needle\n";
  std::cin >> haystack >> needle;
  int ans = strStr(haystack, needle);
  std::cout << ans << std::endl;
}

int strStr(std::string haystack, std::string needle) {
  return haystack.find(needle);
}
