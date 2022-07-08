#define _CRT_SECURE_NO_WARNINGS//解决scanf编译报错问题，先生成一次后报错，把报错use后面复制到最前面，用define定义

#include <stdio.h>

int main()//入口函数
{
	int a,b;
	scanf("%d%d", &a,&b);//一定要在变量前加&
	printf("%d\n", a + b);
}