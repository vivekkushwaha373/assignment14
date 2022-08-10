#include<stdio.h>
int main()
{   int s=0;
    int arr[10],ptr[10];
    for(int i=0;i<10;i++)
{
    printf("enter the %d number: ",i+1);
    scanf("%d",&arr[i]);
}
    for(int i=0;i<10;i++)
{
    ptr[i]=arr[i];
    
    }
printf("display of copied array: ");
 for(int i=0;i<10;i++)
{
   printf("%d ",ptr[i]);
    
    }

    return 0;
}