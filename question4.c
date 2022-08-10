#include<stdio.h>
int main()
{  int s;
    int arr[10];
    for(int i=0;i<10;i++)
{
    printf("enter the %d number: ",i+1);
    scanf("%d",&arr[i]);
}
s=arr[0];
    for(int i=0;i<10;i++)
{
    
        if(s<arr[i])
        s=arr[i];
    
    
    }
printf("the greatest number is: %d",s);

    return 0;
}