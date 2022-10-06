#include <stdio.h>
#include <string.h>
int occurance(char string[], char c)
{
    int count = 0;
    char *ptr = string;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            count++;
        }
        ptr++;
    }
    if(count!=0)
    {
      printf("the character is occured in the string");
    }
    else 
    {
      printf("The character is not occured in the string");
    }
    return 0;
}
int main()
{
    char arr[50]="hello bhai ";
   
    
    
    occurance(arr, 'h');
    return 0;
}