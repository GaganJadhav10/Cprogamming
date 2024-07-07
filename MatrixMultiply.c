/*
Algorithm:
1. Start
2. Define function matrix Multiplication to multiply two matrices.
3. Define function display Matrix to display a matrix.
4. Read the number of rows and columns of the first matrix from the user.
5. Read elements of the first matrix.
6. Read the number of rows and columns of the second matrix from the user.
7. Read elements of the second matrix.
8. If the number of columns of the first matrix is not equal to the number of rows of the second matrix, print an error message and exit.
9. Call matrix Multiplication function with the two matrices and store the result in result.
*/
#include <stdio.h>

void input(int x[10][10], int row, int column) {
    // Input matrix
    int i,j;
    printf("Enter values: \n");
    for(i=0; i<row; i++){
        for(j=0; j<column; j++){
            scanf("%d", &x[i][j]);
        };
    };
};

void display(int x[10][10], int row, int column) {
    // To display matrix
    int i,j;
    for(i=0; i<row; i++){
        for(j=0; j<column; j++){
            printf("%d \t", x[i][j]);
        };
        printf("\n");
    };
};

void multiplyMatrix(int x[10][10], int y[10][10], int multi[10][10], int r1, int c1, int r2, int c2) {
    // multiply
    int i,j,k;
    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            multi[i][j] = 0;
            for(k=0; k<r2; k++){
                multi[i][j] = multi[i][j] + x[i][k] * y[k][j];
            };
        };
    };
}

int main() {
    // Write C code here
    int a[10][10], b[10][10], multi[10][10], p, q, m, n;
    
    printf("Enter rows & columns for matrix 1:\n");
    scanf("%d %d", &p, &q);
    printf("Enter rows & columns for matrix 2:\n");
    scanf("%d %d", &m, &n);
    
    if(m==q) {
        input(a, p, q);
        input(b, m, n);
        printf("Matrix 1:\n");
        display(a, p, q);
        printf("Matrix 2:\n");
        display(b, m, n);
        
        multiplyMatrix(a, b, multi, p, q, m, n);
        printf("Multiplied matrix:\n");
        display(multi, p, n);
    }
    else {
        printf("No multiplication possible");
    };
    
    

    return 0;
}
