#include <algorithm>
#include <cctype>
#include <fstream>
#include <iostream>
#include <map>
#include <pstl/glue_algorithm_defs.h>
#include <string>
#include <sstream>
#include <vector>


int main () {
    std::vector<std::map<std::string, int>> list_of_maps;
    std::ifstream input_file("input");
    std::string word;
    std::string line;
    int sum = 0;
    int count;
    if(!input_file.is_open()){
        std::cout << "file opening error" << std::endl;
        return 1;
    }
    while(getline(input_file, line)){
        std::stringstream iss(line);
        std::map<std::string ,int> one_map;
        while (iss >> count >> word) {
            word.erase(std::remove_if(word.begin(), word.end(), ::ispunct), word.end());
            one_map[word] = std::max(one_map[word], count);
        }
        list_of_maps.push_back(one_map);
    }
    input_file.close();
    for(int i=0; i<list_of_maps.size(); i++){
        if(list_of_maps[i]["red"] <= 12 && list_of_maps[i]["green"] <= 13 && list_of_maps[i]["blue"] <= 14){
            sum+=(i+1);
        }
    }
    std::cout << sum << std::endl;
    return 0;
}

