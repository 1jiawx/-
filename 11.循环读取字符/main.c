#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	char c;
	while (scanf("%c", &c) != EOF)
	{
		if (c != '\n')//判断，后面有小括号里面是一个表达式，最后不加；
		{
			printf("%c", c - 32);
		}
		else {
			printf('\n');
		}
	}
}