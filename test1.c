#include <stdio.h>
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void sortt(int arr[], int n)
{
    int i = -1, j = n;
    while (1)
    {
        do
        {
            i++;
        } while (arr[i] == 0);
        do
        {
            j--;
        } while (arr[j] == 1);

        if (i >= j)
            return;
            
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        }
}
int main()
{
    int arr[] = {0, 0, 1, 1, 0, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    display(arr, n);
    sortt(arr,n);
    display(arr, n);
}