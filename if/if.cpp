#include <stdio.h>
int main(void)
{
	int num;

	printf("���� �Է��ϼ���: ");//�ȳ� �޽���=ģ���� ���α׷�
	scanf("%d", &num);

	if (num > 0)
		printf("%d�� ����Դϴ�.\n", num);//%d�� ���༭ ��Ȯ�� ¤���ִ°� �� ģ���� ���α׷�
	else if (num == 0)
		printf("%d�� 0�Դϴ�.\n", num);
	else 
		printf("%d�� �����Դϴ�.\n", num);//���� ��ø���� �̰� �� ����� ���α׷�


	//else           //��ø if��
	//	if (num == 0)
	//		printf("%d�� 0�Դϴ�.", num);
	//	else
	//		printf("%d�� �����Դϴ�.", num); 

	return 0;
}