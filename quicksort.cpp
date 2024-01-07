#include<stdio.h>
void display(int arr[],int end);
int partition(int arr[],int start,int end);
void QuickSort(int arr[],int start,int end)
{   int i;
    if(start>end)
      return;
      int index=partition(arr,start,end);
      QuickSort(arr,start,index-1);
      QuickSort(arr,index+1,end);
    
}
int partition(int arr[],int start,int end)
{   int temp;
    int first=start;
    int second=first;
    while(second<=end)
    {
        if(arr[second]<=arr[end])
        { 
            temp=arr[first];
            arr[first]=arr[second];
            arr[second]=temp;
            first++;
            second++;

        }
        else
        second++;
    }
    return first-1;
}
void display(int arr[],int end)
{
    int i;
    for(i=0;i<=end;i++)
    { printf("%d",arr[i]);
     printf("\t");
    }
}
int main()
{
    int i;
    int arr[10];
    int size;
    scanf("%d",&size);
    for(int i=0;i<size;i++)
      scanf("%d",&arr[i]);
      int start=0;
      int end =size-1;
       QuickSort(arr,start,end);
       display(arr,end);
       return 0;
}