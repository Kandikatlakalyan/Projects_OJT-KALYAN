#include<stdio.h>
void main() {
   int arr[10][10], size, i, j, temp;
 
   printf("\nEnter the size of matrix :");
   scanf("%d", &size);
 
   printf("\nEnter the values a:");
   for (i = 0; i < size; i++) {
      for (j = 0; j < size; j++) {
         scanf("%d", &arr[i][j]);
      }
   }
 
   printf("\nGiven square matrix is");
   for (i = 0; i < size; i++) {
      printf("\n");
      for (j = 0; j < size; j++) {
         printf("%d\t", arr[i][j]);
      }
   }
 
 
 
   printf("\nTranspose matrix is :");
   for (i = 0; i < size; i++) {
      printf("\n");
      for (j = 0; j < size; j++) {
         printf("%d\t", arr[j][i]);
      }
   }
 

}
