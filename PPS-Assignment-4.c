#include<stdio.h>
int main(){

// future steps???

// Create a displayMatrix() function.
// Create addMatrix() and subtractMatrix() functions.
// Learn to validate an entire input line rather than relying solely on scanf().

int rows, columns, i, j;

char choice;

    printf("For the square matrix, enter the no. of rows: ");
    if (scanf("%d", &rows) != 1 || rows < 1){
        printf("Invalid row input \n"); 
        return 1;
    }
    printf("For the square matrix, enter the no. of columns: ");
    if (scanf("%d", &columns) != 1 || columns < 1){
        printf("Invalid column input \n"); 
        return 1;
    }
    if (rows > 100 || columns > 100) {
	    printf("Matrix size exceeds maximum allowed dimensions (100x100). \n");
	    return 1; 
    }  
    if (rows != columns){
      printf("rows are not equal to columns, not a square matrix");
      return 1;
    }
int a[rows][columns], b[rows][columns], sum[rows][columns], subt[rows][columns];
  
printf("Enter values of 1st matrix \n");  
  for (i = 0; i < rows; i++ )
  {
      for (j = 0; j < columns; j++ ){
        printf("Enter value in row %d, column %d : ", i+1, j+1);
        if (scanf("%d", &a[i][j]) != 1 ){
          printf("Value entered is not an integer");
          return 1;
        }
      } 
  }

printf("Enter values of 2nd matrix \n");  
  for (i = 0; i < rows; i++ )
  {
      for (j = 0; j < columns; j++ ){
        printf("Enter value in row %d, column %d : ", i+1, j+1);
        if (scanf("%d", &b[i][j]) != 1 ){
          printf("Value entered is not an integer");
          return 1;
        }
      } 
  }
printf("Select the type of operation on your matrix: \n");
printf("Type '+' for addition or '-' for subtraction \n ");
scanf(" %c", &choice);
  
  if (choice != '+' && choice != '-'){
    printf("Input was not '+' or '-', ending program..,");
    return 1;
  } 

  switch(choice){
    case '+':
    printf("Addition of both matrices are: \n");
      for (i = 0; i < rows; i++){
        for (j = 0; j < columns; j++){
          sum[i][j] = a[i][j] + b[i][j];
          printf("%5d ", sum[i][j]);
        }
        printf("\n");
      }
    break;

    case '-':
    printf("Subtraction of both matrices are: \n");
      for (i = 0; i < rows; i++){
        for (j = 0; j < columns; j++){
          subt[i][j] = a[i][j] - b[i][j];
          printf("%5d ", subt[i][j]);
        }
        printf("\n");
      }
    break;

    default:
      printf("Wrong input");
    break;  
  }
  
  return 0;
}