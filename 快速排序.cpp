#include <stdio.h>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int a[10]={0,1,5,3,4,9,6,8,7,2};
void quicksort(int l,int r)
{
    if(l>r)
        return ;
     int i=l;
     int j=r;
     int m=a[l];
     while(i<j)
     {

         while(a[j]>=m&&i<j)j--;//顺序很重要 先右
         while(a[i]<=m&&i<j)i++;
         if(i<j)
            swap(a[i],a[j]);
     }
      a[l]=a[i];
      a[i]=m;
       for(int k=0;k<10;k++)
    printf("%d ",a[k]);
    printf("i=%d j=%d",i,j);
 printf("\n");
     quicksort(l,i-1);
     quicksort(i+1,r);
}
int main()
{

 int n=10;
 quicksort(0,n-1);
 for(int i=0;i<n;i++)
    printf("%d ",a[i]);
 printf("\n");
}
