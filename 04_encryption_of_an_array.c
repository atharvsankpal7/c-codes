#include <stdio.h>
#include <string.h>
void encr(char *arr)
{
    char *ptr = arr;
    while (*ptr != 0)
    {
        *ptr += 1;//this changes the ascii value of the character at that pointer so the character also gets updated
        ptr++;
    }
    printf("After the encryption the text is -->%s\n", arr);
}
int main()
{
    char arr[5000];
    printf("Enter the text you want to encrypt -->\n");
    gets(arr);
    encr(arr);
    return 0;
}