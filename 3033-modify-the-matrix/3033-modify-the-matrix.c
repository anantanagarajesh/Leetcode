/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** modifiedMatrix(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) {

    int** modified = (int**)malloc(sizeof(int*) * matrixSize);
    *returnColumnSizes = (int*)malloc(sizeof(int) * matrixSize);

    for (int i = 0; i < matrixSize; i++) {
        (*returnColumnSizes)[i] = matrixColSize[i];
    }
    for (int i = 0; i < matrixSize; i++) {
        modified[i] = (int*)malloc(sizeof(int) * matrixColSize[i]);
        for (int j = 0; j < matrixColSize[i]; j++) {
            modified[i][j] = matrix[i][j];
            if (matrix[i][j] == -1) {
                int maxVal = matrix[0][j];
                for (int k = 1; k < matrixSize; k++) {
                    if (matrix[k][j] > maxVal) {
                        maxVal = matrix[k][j];
                    }
                }
                modified[i][j] = maxVal;
            }
        }
    }

    *returnSize = matrixSize;
    return modified;
}