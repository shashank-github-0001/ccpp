/*
 * its day 1 and what i have to do is take a paragraph of numbers and add one paragraph and compare all the paragraph
 * and return the paragraph which has the highest sum
 * id like to use a file to take the input and stuff so that i can do that easily
 * part 1: finding out the largest paragraph sum
 * part 2: finding the sum of top 3 paragraphs
 */

#include <algorithm>
#include <bits/stdc++.h>
#include <functional>


int main () {
    std::ifstream file("inputfile");
    std::string line;
    int sum = 0;
    std::vector<int> vec_sum;
    if(!file){
        std::cout << "file not created" << std::endl;
    } else {
        std::cout << "file created successfully" << std::endl;
        while(std::getline(file, line)){
            if(!line.empty()){
                std::string::iterator it = line.begin();
                while (it != line.end() && isspace(*it)) {
                    it = line.erase(it);
                }
                sum+= stoi(line);
            } else {
                vec_sum.push_back(sum);
                sum = 0;
                continue;
            } 
        }
    }
    std::sort(vec_sum.begin(), vec_sum.end(), std::greater<int>());
    std::cout << vec_sum[0]+vec_sum[1]+vec_sum[2] << std::endl;
    return 0;
}
