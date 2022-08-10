#include<stdio.h>
void swap(int*,int*);

int main()
{   int temp;
    int arr[10];
    for(int i=0;i<10;i++)
{
    printf("enter the %d number: ",i+1);
    scanf("%d",&arr[i]);
}
    for(int i=0;i<10;i++)
{
 for(int j=i+1;j<10;j++)
  if(arr[i]>arr[j])
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
printf("the second smallest number in array is : %d",arr[1]);

    return 0;
}