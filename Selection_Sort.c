//  Write a program to implement selection sort.
#include<stdio.h>
int main()
{
    printf("-----------------Selection Sort-----------\n");
    int arr[10]={2,7,4,3,90,5,41,23,59,71};
    int i,j, min, temp;
    printf("Before sorting : \n");
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }

    for ( i = 0; i < 9; i++)
    {
        min=i;
        for ( j = i+1; j < 10; j++)
        {
            if (arr[min]>arr[j])
            {
                min=j;
            }    
        }
        if (min!=i)
        {
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;   
        }
        
    }
    printf("After selection sorting : \n");
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }



    return 0;
}
