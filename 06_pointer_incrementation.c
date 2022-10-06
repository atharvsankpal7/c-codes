#include<stdio.h>
int main()
{
int arr[10]={1,2,3,6,5,4,78,9,2,5};
int *ptr=&arr[0];
printf("%d ",*(ptr++)); //<-- post incrementation
printf("%d ",*ptr); 
printf("%d",*(++ptr));  //<-- pre incrementation
return 0;
}