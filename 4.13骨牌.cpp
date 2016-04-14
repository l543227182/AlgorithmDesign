#include <stdio.h>
#include<math.h>
int k1,k2,k3,k4;
void gu(int rs,int re,int cs,int ce,int y,int x)
{
      int rm=(rs+re)/2;
      int cm=(cs+ce)/2;
      if(rs==re)
        return ;
     if(y<=rm)//4 5 5    25 21 21 18
     {
        if(x<=cm)//иовС
        {
           // printf("%d %d\n",x,y);
        k1++;
        gu(rs,rm,cs,cm,y,x);
        gu(rs,rm,cm+1,ce,rm,cm+1);
        gu(rm+1,re,cs,cm,rm+1,cm);
        gu(rm+1,re,cm+1,ce,rm+1,cm+1);
        }
        else//иоср
        {
        k2++;
        gu(rs,rm,cs,cm,rm,cm);
        gu(rs,rm,cm+1,ce,y,x);
        gu(rm+1,re,cs,cm,rm+1,cm);
        gu(rm+1,re,cm+1,ce,rm+1,cm+1);
        }
     }
     else{//right y
        if(x<=cm)
        {
        k3++;
        gu(rs,rm,cs,cm,rm,cm);
        gu(rs,rm,cm+1,ce,rm,cm+1);
        gu(rm+1,re,cs,cm,y,x);
        gu(rm+1,re,cm+1,ce,rm+1,cm+1);

        }
        else
        {
        k4++;
        gu(rs,rm,cs,cm,rm,cm);
        gu(rs,rm,cm+1,ce,rm,cm+1);
        gu(rm+1,re,cs,cm,rm+1,cm);
        gu(rm+1,re,cm+1,ce,y,x);
        }
     }
}
int main()
{
    int n,i,j;
    int num;
    int x,y;
    scanf("%d",&num);
    while(num--)
    {
    scanf("%d",&n);
    scanf("%d %d",&x,&y);
    n=pow(2,n);
    //printf("%d %d\n",n,9/2);
    k1=k2=k3=k4=0;
    gu(1,n,1,n,x,y);
    printf("%d %d %d %d\n",k1,k2,k3,k4);

    }
    return 0;
}
