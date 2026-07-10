int** transpose(int** matrix, int matrix_size, int* matrix_col_size, int* return_size, int** return_column_sizes) 
{
    int **ans = (int**)malloc(*matrix_col_size * sizeof(int*));
    for (int i = 0; i < *matrix_col_size; ++i) 
    {
        ans[i] = (int*)malloc(matrix_size * sizeof(int));
    }
    for (int i = 0; i < matrix_size; ++i)
    {
        for(int j = 0; j < *matrix_col_size; ++j)
        {
            ans[j][i] = matrix[i][j];
        }
    }
    *return_size = *matrix_col_size;
    *return_column_sizes = (int*)malloc(*matrix_col_size * sizeof(int));
    for (int i = 0; i < *matrix_col_size; ++i) (*return_column_sizes)[i] = matrix_size;
    return ans;
}