#include <stdio.h>
int main(void)
{
	int sNum;
	int score;
	int maxNum;//�ִ��� ���Ƿ� ���� �ʴ� ��� while�� ���� ���� = do while�� �ʿ�!!!!!!!!!!->��� �� ���� �ؾ��ϱ⶧����
	int i = 1;
	int total= 0;

	printf("Enter a student number:");
	scanf("%d", &sNum);
	printf("Enter a score: ");
	scanf("%d", &score);

	maxNum = score;
	total += score;

	while (i < sNum)
	{
		i++;

		printf("Enter a score: ");
		scanf("%d", &score);

		total += score;

		if (score > maxNum)
			maxNum = score;			
	}
	
	printf("The total is %d\n", total);
	printf("The Maximun is %d\n", maxNum);
}