#include<stdio.h>
int main()
{   int s=0;
    int arr[10];
    for(int i=0;i<10;i++)
{
    printf("enter the %d number: ",i+1);
    scanf("%d",&arr[i]);
}
printf("array in reversed order: ");
    for(int i=sizeof(arr)/sizeof(int);i>0;i--)
{
    printf("%d ",arr[i-1]);
    
    }


    return 0;
}