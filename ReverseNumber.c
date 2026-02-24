//Reverse number order
#include<stdio.h>
int fun1(int n)
{
    int rev=0;
    while(n>0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    return rev;
}
int fun2(int n, int rev)
{
    if(n ==0) return rev;
    return fun2(n/10,rev*10+n%10);
}
int main()
{
    printf("%d\n", fun1(234));
    printf("%d\n", fun2(234,0));

}
