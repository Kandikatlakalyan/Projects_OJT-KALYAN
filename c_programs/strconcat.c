#include <stdio.h>

int main() {
    // Write C code here
    char A[20]="c programming";
    char B[20]="rebel";
    int len=0,i,j;
    for(i=0;A[i]!='\0';i++);
    
    for(j=0;B[j]!='\0';j++)
    {
        A[i]=B[j];
        i++;
    }
    A[i]='\0';
    printf("After concatenation :%s",A);

    return 0;
}
