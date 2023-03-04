#include<stdio.h>
int main()
{
	int x,y,tmp,x1,y1;
	int greatestCommonDivisor;
	int leastCommonMutiple;
	puts("输入两int数");
	scanf("%d%d",&x,&y);
	y1=y;
	x1=x;
	while (tmp = x % y)
    {
        x = y;
        y = tmp;
    }
	
	printf("greatestCommonDivisor=%d\n",y);//辗转相除法，1mod2 =x ;2mod x=y ;当mod 为0，除数就是最大公约数
	printf("leastCommonMutiple=%d",x1*y1/y);//两数相乘，再除以最大公约数，即最小公倍数
	return 0;
}