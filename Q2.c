#include <stdio.h>




void take_mat(int col, int mat[][col], int row)
{
    printf("Enter matrix: \n"); 
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
            scanf("%d", &mat[i][j]);
        }

    }
}

void multiply(int col1, int col2, int mat1[][col1], int mat2[][col2], int row1,  int row2)
{
    for (int i=0; i<row1; i++)
    {
        
        for (int j=0; j<col2; j++)
        {
            int sum=0;
            
            for (int k=0; k<col1; k++)
            sum += *(*(mat1+i)+k) * *(*(mat2+k)+j);

            printf("%d ", sum);
        }
        printf("\n");
    }

}



int main()
{
    int row1, col1, row2, col2;
    printf("Enter dimensions for matrix 1: ");
    scanf("%d %d", &row1, &col1);
    printf("Enter dimensions for matrix 2: ");
    scanf("%d %d", &row2, &col2);
    int mat1[row1][col1], mat2[row2][col2];
    if (col1 != row2)
    {
        printf("Not valid");
        return 1;
    }
    take_mat(col1, mat1, row1);
    take_mat(col2, mat2, row2);
    multiply(col1, col2, mat1, mat2, row1, row2);
    printf("\n");
    return 0;
}

