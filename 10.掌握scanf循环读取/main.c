#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��ջ�������fflush��stdin������2012�汾ǰ��stdin�Ǳ�׼���롣
//rewind��stdin���������ڵ�
int main()
{
	int i,ret;
	while(rewind(stdin),(ret=scanf("%d", &i))!=EOF)//while��ʵ��ѭ��,�����ã�����!=EOF�ǹ�ϵ����������������EOF��Ϊ�棬��������
	{
		printf("i=%d\n", i);
	}
	return 0;
}