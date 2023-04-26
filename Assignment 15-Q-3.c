#include<stdio.h>
int prime(int a);
int main()
{
    int a,k;
    printf("Enter a number");
    scanf("%d",&a);
    k=prime(a);
    if(k==a)
    printf("prime");
}
int prime(int a)
{
    int i;
    for(i=2;i<=a-1;i++)
    {
        if(a%i==0)
    {
        break;
    }
    }
    if(i==a)
        return a;

}
