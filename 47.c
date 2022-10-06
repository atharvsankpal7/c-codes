#include<stdio.h>
int func(int a);
int main()
{
    int a,ans;
    
    printf("enter the value=");
    scanf("%d",&a);
    
    ans=func(a);
    printf("factorial=%d",ans);

    return 0;


}
int func(int a)  
{
    int ans;
    if(a==0||a==1)
    {

        return 1;
    }
    else
    {
        ans = a*func(a-1);
        return ans;

    }
}