#include <stdio.h>
#include<string.h>
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
   int i,j;
   int t;
   int tt[100];
   int map[100][100]={0};
  for(i=1;i<100;i++)
    map[1][i]=map[i][1]=map[i][0]=map[0][i]=1;
   for( j=2;j<100;j++)
   {
      for(i=2;i<=100;i++)
      {
         if(i>=j)
           map[j][i]=1+map[j][j-1];
         else
            map[j][i]=map[j-i][i]+map[j][i-1];
      }
   }
   /*
   for(i=0;i<9;i++)
   {

    for(j=0;j<9;j++)
   {
       printf("%d ",map[i][j]);
   }
   printf("\n");
   }*/
   scanf("%d",&i);
   while(i--)
   {
       scanf("%d",&t);
      printf("%d\n",map[t][t]);
    //   printf("%d\n",Num(t,t));

   }
}
