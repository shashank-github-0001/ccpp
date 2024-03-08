#include <vector>

std::vector<int> getRow( int rowIndex ) {
    if(rowIndex==0) return {1};
    if(rowIndex==1) return {1,1};
    std::vector<std::vector<int>> matrix;
    matrix.push_back({1});
    for(int i=1; i<=rowIndex; i++){
        matrix.push_back({1, 1});
    }
    for(int i=2; i<=rowIndex; i++){
        for(int j=1; j<i; j++){
            matrix[i].insert(matrix[i].begin()+j, matrix[i-1][j-1]+matrix[i-1][j]);
        }
    }
    return matrix[rowIndex];
} 
