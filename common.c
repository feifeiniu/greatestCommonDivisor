#include<stdio.h>
int main()
{
	int x,y,tmp,x1,y1;
	int greatestCommonDivisor;
	int leastCommonMutiple;
	puts("������int��");
	scanf("%d%d",&x,&y);
	y1=y;
	x1=x;
	while (tmp = x % y)
    {
        x = y;
        y = tmp;
    }
	
	printf("greatestCommonDivisor=%d\n",y);//շת�������1mod2 =x ;2mod x=y ;��mod Ϊ0�������������Լ��
	printf("leastCommonMutiple=%d",x1*y1/y);//������ˣ��ٳ������Լ��������С������
	return 0;
}