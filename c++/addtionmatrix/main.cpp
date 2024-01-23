


#include <iostream>
#include <vector>

// Function to add two matrices
std::vector<std::vector<int>> addMatrices(const std::vector<std::vector<int>>& matrix1, const std::vector<std::vector<int>>& matrix2) {
    int rows = matrix1.size();
    int cols = matrix1[0].size();

    std::vector<std::vector<int>> result(rows, std::vector<int>(cols, 0));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    return result;
}

// Function to display a matrix
void displayMatrix(const std::vector<std::vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    // Example matrices
    std::vector<std::vector<int>> matrix1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    std::vector<std::vector<int>> matrix2 = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

    // Perform matrix addition
    std::vector<std::vector<int>> resultMatrix = addMatrices(matrix1, matrix2);

    // Display the matrices and the result
    std::cout << "Matrix 1:" << std::endl;
    displayMatrix(matrix1);

    std::cout << "Matrix 2:" << std::endl;
    displayMatrix(matrix2);

    std::cout << "Resultant Matrix:" << std::endl;
    displayMatrix(resultMatrix);

    return 0;
}
