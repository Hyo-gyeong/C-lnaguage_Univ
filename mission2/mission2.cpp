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
	else if (gender == 'F')	{//시작 중괄호는 옆에
		printf("Enter your height: ");
		scanf("%d", &height);
		printf("Enter your weight: ");
		scanf("%d", &weight);//출력문과 밑의 조건문은 한 줄을 띄어서 구분해주어야 함.

		if (height <= (weight + 110))//계산식으로 쓸때는 괄호로 묶어주기!
			printf("You NEED a diet. Try HARDER.\n");
		else 
			printf("You don't need a diet.\n");
	}//끝 중괄호는 마지막에 써야 끝을 파악할 수 있음

	return 0;//return문도 위의 문장과 구분해주기!
}