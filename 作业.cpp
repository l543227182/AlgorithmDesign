#include <stdio.h>
#include<string.h>
#include<algorithm>

int num[100][100]={0};
int Num(int n,int m)
{
    if(n==1||m==1)
        return 1;
    if(m>=n)
        return 1+Num(n,n-1);
    if(m<n)
        return Num(n-m,m)+Num(n,m-1);
}
int main(){
   int k;
   int t;
   for(int i=0;i<=100;i++)
   {
       num[0][i]=num[i][0]=num[1][i]=1;
   }
   for(int i=2;i<=100;i++)
   {
    for(int j=1;j<100;j++)
   {
       if(i<=j)
        num[i][j]=num[i][i-1];
       if(i>j)
        num[i][j]+=num[i-j][j]+num[i][j-1];
   }
   }

   for(int i=0;i<10;i++)
   {

    for(int j=0;j<10;j++)
    printf("%d ",num[i][j]);
    printf("\n");
   }
   scanf("%d",&k);
   while(k--)
   {
       scanf("%d",&t);
       printf("%d\n",Num(t,t));
   }
}
