#include<stdio.h>
#include<string.h>
void case_conversion()
{
	    char str[30];
    int i;
    printf (" Enter the string: ");
    scanf ("%s",str); 

     
     for ( i = 0; i <= strlen (str); i++)
     {
   
     if (str[i] >= 65 && str[i] <= 90)
     str[i] = str[i] + 32; 
     }
    printf (" \n Upper Case to Lower case string is: %s", str);
      for ( i = 0; i <= strlen (str); i++)
     {
    
     if (str[i] >= 97&& str[i] <= 122)
     str[i] = str[i] - 32; 
     }
    printf (" \n lower Case to upper case string is: %s", str);
}
