#include <stdio.h>
#include <stdlib.h>//random�Լ� �������
#include <time.h>
int main(void)
{
	//�� �� �ٲٱ�!!: temp��� �ӽ� ������ ������ѳ���!! ->�ڵ尡 �� ��������....�ּ��� �׻� �и��ؼ� ��������!
	int answer, temp;
	int num1, num2;//�������� rand������ ���� �������
	
	srand(time(NULL));//srand���� �����ְ�, srand�� ���� ���� ������ ����, srand�ȿ� �ִ� ���ڴ� � ���� ������ �׻� ��� ���� ����!

	num1 = rand() % 10;
	num2 = rand() % 10;//���������̶� ���� ���� ���� �ؿ��� ��������� ����!


	if (num1 < num2){//�����ϰ� �����ϰų� ����Ǽ� ���� ������ ����! "num1�� ũ�� num2�� �۴ٴ� ����"�� �� ��찡 �ƴ� �ٸ� �� ��츸 temp�� ����ؼ� �ٲ��ֱ�!
		temp = num1;
		num1 = num2;
		num2 = temp;
	}


	printf("What is %d - %d?", num1, num2);
	scanf("%d", &answer);

	if (answer == num1 - num2)
		printf("You are correct!\n");
	else 
		printf("Your answer is wrong.\n%d - %d should be %d.\n", num1, num2, num1 - num2);
	
}