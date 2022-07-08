#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//清空缓冲区：fflush（stdin）用于2012版本前，stdin是标准输入。
//rewind（stdin）用于现在的
int main()
{
	int i,ret;
	while(rewind(stdin),(ret=scanf("%d", &i))!=EOF)//while是实现循环,后面用（）。!=EOF是关系运算符，如果不等于EOF则为真，继续运行
	{
		printf("i=%d\n", i);
	}
	return 0;
}