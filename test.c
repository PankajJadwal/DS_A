#include<stdio.h>
void sort(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        while(i>0 && arr[i]<arr[i-1])
        {
            int temp=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=temp;
            i--;

        }
    }
}
void merge(int arr[], int low, int mid, int high)
{
    int n1=mid-low+1;
    int n2=high-mid;
    int arr1[n1];
    int arr2[n2];
    for(int i=0;i<n1;i++)
    {
        arr1[i]=arr[i+low];
    }
    for(int i=0;i<n2;i++)
    {
        arr2[i]=arr[i+mid+1];
    }
    int i=0;
    int j=0;
    int k=low;
    while(i<n1  && j<n2 )
    {
        if(arr1[i]<arr2[j])
        {
            arr[k]=arr1[i];
            i++;
            k++;
        }
        else
        {
            arr[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<n1)
    {
        arr[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=arr2[j];
        k++;
        j++;
    }
}
void merge_sort(int arr[], int low, int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        merge_sort(arr,low, mid);
        merge_sort(arr, mid+1,high);
        merge(arr, low, mid, high);
    }
    
       
    
}
int partition(int arr[], int p, int r)
{
    int i=p-1;
    int x=arr[r];
    for(int j=p;j<=r-1;j++)
    {
        if(arr[j]<=x)
        {
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp=arr[i+1];
    arr[i+1]=arr[r];
    arr[r]=temp;
    return i+1;
}
void quick_sort(int arr[], int p, int r)
{   if(p<r)
    {
        int x=partition(arr,p,r);
    quick_sort(arr,p,x-1);
    quick_sort(arr,x+1,r);

    }
    
}
void display(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[]={3,5,4,2,1};
    int n=5;
    display(arr, n);
    // sort(arr,n);
    merge_sort(arr,0,n);
    // quick_sort(arr,0,n-1);
    display(arr,n);
}