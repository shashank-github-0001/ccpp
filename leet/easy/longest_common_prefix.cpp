#include <iostream>
#include <sstream>
#include <vector>

std::string longestCommonPrefix(std::vector<std::string> &strs) {
  std::stringstream ss;
  char compchar;
  bool condition = true;
  int j = 0;
  while (j != strs[0].length() && condition == true) {
    if (strs.size() != 0 && strs[0][j] != '\0') {
      compchar = strs[0][j];
      for (int i = 0; i < strs.size(); i++) {
        if (strs[i][j] != compchar) {
          condition = false;
          break;
        }
      }
      if (condition == true) {
        ss << compchar;
        j++;
      }
    }
  }
  return ss.str();
}

int main(int argc, char **argv) {
  std::vector<std::string> strs = {"shnks", "shank", "sanks"};
  std::cout << longestCommonPrefix(strs) << std::endl;
}
