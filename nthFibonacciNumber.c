#include <stdio.h>
int fun(int n)  // Recursive 
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fun(n - 1) + fun(n - 2);
}
long int fun2(int n)  // Iterative code
{
    long int arr[n + 1];
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr[n];
}
int main()
{
    printf("%ld\n", fun(70));
    // printf("%ld\n", fun2(70));
}