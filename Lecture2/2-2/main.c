#include <stdio.h>  // ��ó���� (pre - processor) : ������ ���� ó���ϴ� ��


int main()		// main �Լ� ���� ����
{				// ����(scope)�� ����
	int a;
	int b;		// ���� ���� (variable declaration)
	int c;
	
	a = 1;		// ������ �� ���� (assignment)
	b = 2;
	c = a + b;		// ������ ���� ��� ���� (operation assignment)
	
	printf("Result is %i", c);		// �Լ� ȣ�� (Call or Invoke)

	return 0;		// ��� ��(value)�� ��ȯ(return) 
}				// ������ ��