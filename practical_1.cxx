#include <stdio.h>

int main() {
    // Static input matrix
    int matrix[3][3] = {
        {6, 0, 5},
        {3, 8, 0},
        {7, 0, 3}
    };

    int rows = 3, cols = 3;
    int zeroCount = 0;

    // Count zero elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0)
                zeroCount++;
        }
    }

    // Check if matrix is sparse
    if (zeroCount > (rows * cols) / 2)
        printf("The matrix is a Sparse Matrix.\n");
    else
        printf("The matrix is NOT a Sparse Matrix.\n");

    return 0;
}
