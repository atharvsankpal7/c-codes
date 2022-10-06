#include <stdio.h>
#include <string.h>
typedef struct bankid
{
    char name[100];
    long int account;
    long int balance;
} bank;

int main()
{
    bank c1, c2;
    bank *s;
    s = &c1;
    s->account = 10;
    s->balance = 10000;
    strcpy(s->name, "Atharv");

    printf("The name of the user is -->%s\nThe account number of the user is %d with bank balance of %d", c1.name, c1.account, c1.balance);
    return 0;
}