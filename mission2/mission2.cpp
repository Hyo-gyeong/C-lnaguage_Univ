#include <stdio.h>
int main(void)
{
	char gender;
	int height;
	int weight;

	printf("Enter you gender(M/F): ");
	scanf("%c", &gender);

	if (gender == 'M')
		printf("We only serve for female. Sorry.\n");
	else if (gender == 'F')	{//���� �߰�ȣ�� ����
		printf("Enter your height: ");
		scanf("%d", &height);
		printf("Enter your weight: ");
		scanf("%d", &weight);//��¹��� ���� ���ǹ��� �� ���� �� �������־�� ��.

		if (height <= (weight + 110))//�������� ������ ��ȣ�� �����ֱ�!
			printf("You NEED a diet. Try HARDER.\n");
		else 
			printf("You don't need a diet.\n");
	}//�� �߰�ȣ�� �������� ��� ���� �ľ��� �� ����

	return 0;//return���� ���� ����� �������ֱ�!
}