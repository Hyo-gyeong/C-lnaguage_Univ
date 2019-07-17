#include <stdio.h>
int main(void)
{
	int sNum;
	int score;
	int maxNum;//최댓값을 임의로 주지 않는 경우 while문 좋지 않음 = do while문 필요!!!!!!!!!!->적어도 한 번은 해야하기때문에
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