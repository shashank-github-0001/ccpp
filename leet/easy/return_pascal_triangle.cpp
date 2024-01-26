#include <vector>

std::vector<std::vector<int>> generate( int numRows ) {
    if(numRows==1) return {{1}};
    if(numRows==2) return {{1},{1,1}};
    std::vector<std::vector<int>> matrix;
    matrix.push_back({1});
    for(int i=0; i<numRows-1; i++){
        matrix.push_back({1, 1});
    }
    for(int i=2; i<numRows; i++){
        for(int j=1; j<i; j++){
            matrix[i].insert(matrix[i].begin()+j, matrix[i-1][j-1]+matrix[i-1][j]);
        }
    }
    return matrix;
} 

