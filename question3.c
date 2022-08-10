#include<stdio.h>
int main()
{   int s=0,p=0;
    int arr[10];
    for(int i=0;i<10;i++)
{
    printf("enter the %d number: ",i+1);
    scanf("%d",&arr[i]);
}
    for(int i=0;i<10;i++)
{
    if(arr[i]%2==0)
    s=s+arr[i];
    else
    p=p+arr[i];
    }
printf("the sum of even number is: %d\n and the sum of odd number is: %d",s,p);

    return 0;
}