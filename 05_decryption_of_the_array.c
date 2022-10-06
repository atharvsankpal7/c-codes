#include <stdio.h>
#include <string.h>
void dencr(char *arr)
{
    char *ptr = arr;
    while (*ptr != 0)
    {
        *ptr -= 1;//this changes the ascii value of the character at that pointer so the character also gets updated
        ptr++;
    }
    printf("After the decryption the text is -->%s\n", arr);
}
int main()
{
    char arr[5000];
    printf("Enter the text you want to decrypt -->\n");
    gets(arr);
    dencr(arr);
    return 0;
}