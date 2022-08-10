#include<stdio.h>
int main()
{   int s=0;
    int arr[10];
    for(int i=0;i<10;i++)
{
    printf("enter the %d number: ",i+1);
    scanf("%d",&arr[i]);
}
    for(int i=0;i<10;i++)
{
    s=s+arr[i];
    
    }
printf("the sum is: %f",1.0*s/(sizeof(arr)/sizeof(int)));

    return 0;
}