#include <string>
#include <iostream>
#include <vector>
#include <sstream>


int lengthOfLastWord(std::string);

int main() {
    std::string s = "Hello Worlds";
    int ans = lengthOfLastWord(s);
    std::cout << ans << std::endl;
}


int lengthOfLastWord(std::string s) {
    std::stringstream ss(s);
    std::string word;
    char c;
    std::vector<std::string> words;
    while ( ss >> word ) {
        words.push_back(word);
    }
    return words[words.size()-1].length();
}
