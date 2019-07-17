#include <stdio.h>
int main(void)
{
	int score;
	char grade;

	printf("학생의 점수를 입력하세요: ");
	scanf("%d", &score);

	/*if (score >= 80)
		printf("A\n");
	else if (score >= 50)
		printf("B\n");
	else if (score >= 30)
		printf("C\n");
	else 
		printf("F\n");*/

	switch (score/10)//수식이나 변수 사용가능 (내 코드=교수님코드)// 어떤 수로 나눌지는 점수가 갈린 기준을 보고 가장간단한걸로 판단해서 고르기..
	{
	case 10:
	case 9:
	case 8:
		grade = 'A';//switch문은 판단만 하는 역할로 바뀜
		//printf("A\n"); 프린트문을 게속 반복하는 것을 하지 않으려고 변수 선언
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
	printf("학생의 점수%d은 %c.\n", score, grade);

	return 0;
}