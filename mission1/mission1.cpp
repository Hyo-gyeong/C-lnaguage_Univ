#include <stdio.h>
int main(void)
{
	int score;
	char grade;

	printf("�л��� ������ �Է��ϼ���: ");
	scanf("%d", &score);

	/*if (score >= 80)
		printf("A\n");
	else if (score >= 50)
		printf("B\n");
	else if (score >= 30)
		printf("C\n");
	else 
		printf("F\n");*/

	switch (score/10)//�����̳� ���� ��밡�� (�� �ڵ�=�������ڵ�)// � ���� �������� ������ ���� ������ ���� ���尣���Ѱɷ� �Ǵ��ؼ� ����..
	{
	case 10:
	case 9:
	case 8:
		grade = 'A';//switch���� �Ǵܸ� �ϴ� ���ҷ� �ٲ�
		//printf("A\n"); ����Ʈ���� �Լ� �ݺ��ϴ� ���� ���� �������� ���� ����
		break;
	case 7:
	case 6:
	case 5:
		grade = 'B';
		break;
	case 4:
	case 3:
		grade = 'C';
		break;
	default:
		grade = 'F';
		break;
	}
	printf("�л��� ����%d�� %c.\n", score, grade);

	return 0;
}