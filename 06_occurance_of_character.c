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
    printf("The occurances are -->%d",count);
    return 0;
}
int main()
{
    char arr[50]="hello bhai ";
   
    
    
    occurance(arr, 'a');
    return 0;
}