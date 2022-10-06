#include <stdio.h>
#include <string.h>
void printstr()
{
    // The gets is used for the string having multiple words
    char s[10];
    printf("Enter the multi word here-->");
    gets(s);
    puts(s); // The puts automatically adds the line in terminal
    printf("The string is -->%s\n", s);
}
void strlength()
{
    char arr[10];
    printf("Enter the string -->\n");
    gets(arr);
    int a = strlen(arr);
    printf("The length of the string is --> %d\n", a);
}
void strcopy()
{
    char *arr = "helo there";
    char arr2[50];
    strcpy(arr2, arr);
    printf("The second string is now -->%s\n", arr2);
}
void str_cat()
{
    char arr[45] = "pig";
    char *arr2 = " benis";
    strcat(arr, arr2);
    printf("After the use of the function the given string will be -->%s\n", arr);
}
void str_cmp()
{
    char *arr = "hello";
    char *arr2 = "helo";
    int a = strcmp(arr2, arr);
    // int a = strcmp(arr,arr2);
    printf("The value of the string of the after returning of the value is -->%d\n", a);
}
int main()
{
    printstr();
    strlength();
    strcopy();
    str_cat();
    str_cmp();
    return 0;
}