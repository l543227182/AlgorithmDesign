#include<stdio.h>
int main()
{

int i,j;
int n;
int num[20];
 int mid;
 int l=0,r,count,target;
scanf("%d",&n);
while(n--)
{

    scanf("%d %d",&count,&target);
    for(i=0;i<count;i++)
    {
     scanf("%d",&num[i]);
    }
     l=0,r=count;
    j=0;
     mid;
    while(l<r)
    {
        mid=(l+r)/2;
        j++;
        if(num[mid]==target)
            break;
          if(num[mid]<target)
            l=mid+1;
          if(num[mid]>target)
            r=mid-1;
    }
    if(l>=r)
    printf("0 %d",j+1);
    else
      printf("%d %d",mid+1,j);

        printf("\n");
}
return 0;
}

