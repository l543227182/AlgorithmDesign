#include<stdio.h>
void move(int n,char a,char b,char c)
{
    if(n==1)
       printf("(%c)--->(%c)%d\n",a,c,n);  //��nֻ��1����ʱ��ֱ�Ӵ�a�ƶ���c
    else
    {
        move(n-1,a,c,b);            //��n-1��Ҫ��aͨ��c�ƶ���b
        printf("(%c)--->(%c)%d\n",a,c,n);
        move(n-1,b,a,c);            //n-1���ƶ�����֮��b�俪ʼ�̣�bͨ��a�ƶ���c����ߺ������
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    move(n,'a','c','b');
    return 0;
}
