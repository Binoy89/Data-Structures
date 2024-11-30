// Find out sum of all array elements using function
#include<stdio.h>
void sum_ele(int arr[],int n,int i);
int main()
{
    int arr[50],n,i;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sum_ele(arr,n,i);
    return 0;
}

void sum_ele(int arr[],int n,int i)
{
    int sum=0;
    for ( i = 0; i < n; i++)
    {
        sum= sum+arr[i];
    }
    printf("Sum of elements : %d\n", sum);

}