#include<stdio.h>
#include<string >
int b[100];
void mergeSort(int a[],int left,int right)
{
    int i,j,k;
    if(left<right)
    {
       int mid=(left+right)/2;
       mergeSort(a,left,mid);
       mergeSort(a,mid+1,right);
       i=left;
       j=mid+1;
       k=left;
       while(i<=mid&&j<=right)
       {
           if(a[i]<a[j])
            b[k++]=a[i++];
            else
             b[k++]=a[j++];
       }
       while(i<=mid)b[k++]=a[i++];
       while(j<=right)b[k++]=a[j++];
       for(i=left;i<=right;i++)a[i]=b[i];
    }
}

int main()
{

    int a[10]={1,2,5,9,7,8,4,6,3,0};
    int n=10;
     /*for(int i=0;i<n;i++)
        printf("%d ",a[i]);*/
    mergeSort(a,0,n-1);
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}
