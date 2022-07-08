#include <stdio.h>

int main()
{
	int i = 5;
	float j = i / 2;//输出为2，i是整型
	float k = (float)i / 2;//输出是2。（float）是字符型强制转换运算,将整型换为浮点型
	printf("j=%f,k=%f\n", j, k);
}