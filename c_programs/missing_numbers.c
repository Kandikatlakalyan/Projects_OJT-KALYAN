#include <stdio.h>
#include <string.h>

int main() {
    char input[1000];   char findWord[100];
    char replaceWord[100];   
    char output[1000]; 
    int i, j, k;
    
    printf("Enter a string: ");
    gets(input); 
    
    printf("Enter the word to find: ");
    gets(findWord);
    
    printf("Enter the word to replace with: ");
    gets(replaceWord);
    
    int inputLength = strlen(input);
    int findWordLength = strlen(findWord);
    int replaceWordLength = strlen(replaceWord);
    
    i = j = k = 0;
    
    while (i < inputLength) {
        int match = 1;
      for (j = 0; j < findWordLength; j++) {
            if (input[i+j] != findWord[j]) {
                match = 0;
                break;
            }
        }
 
        if (match) {
            for (j = 0; j < replaceWordLength; j++) {
                output[k++] = replaceWord[j];
            }
            i += findWordLength;
        } else {
   
            output[k++] = input[i++];
        }
    }
    
    output[k] = '\0'; 
    printf("Result: %s\n", output); 
    return 0;
}
