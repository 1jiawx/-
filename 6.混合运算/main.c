#include <stdio.h>

int main()
{
	int i = 5;
	float j = i / 2;//���Ϊ2��i������
	float k = (float)i / 2;//�����2����float�����ַ���ǿ��ת������,�����ͻ�Ϊ������
	printf("j=%f,k=%f\n", j, k);
}