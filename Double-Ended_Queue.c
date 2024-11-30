#include<stdio.h>
#include<stdlib.h>
#define maxsize 5         
int queue[maxsize];
void insert_frontEnd();
void insert_rearEnd();
void delete_frontEnd();
void delete_rearEnd();
int front=-1, rear=-1;

int main()
{
    printf("----------------------Double ended queue using array------------------\n");
{   int choice;
   while (1)
    {
        printf("\n1.Insert at frontEnd\t2.Insert at rearEnd\t3.Delete at frontEnd\t4.Delete at rearEnd\t5.Exit\n");
        printf("\nEnter choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            insert_frontEnd();
            break;
        case 2:
            insert_rearEnd();
            break;
        case 3:
            delete_frontEnd();
            break;
        case 4:
            delete_rearEnd();
            break;
        case 5:
            exit(0);
        
        default:
            printf("Enter a valid choice");
            break;
        }
    }
    
    return 0;
}

void insert_frontEnd()
{
    int element;
    if ((front==0 && rear==maxsize-1) || (front==rear+1))
    {
        printf("Queue is overflow\n");
    }  
    else
    {
        if (front==-1 && rear==-1)
        {
            front=0;
            rear=0;
        }
        else
        {
            rear++;
        }
        printf("Enter the element : ");
        scanf("%d", &queue[rear]);
        
    }
    
}
   