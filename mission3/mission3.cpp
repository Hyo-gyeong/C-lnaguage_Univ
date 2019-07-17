#include <stdio.h>
#include <stdlib.h>//random함수 들어있음
#include <time.h>
int main(void)
{
	//두 수 바꾸기!!: temp라는 임시 변수에 복사시켜놓기!! ->코드가 더 간단해짐....주석은 항상 분리해서 보기좋게!
	int answer, temp;
	int num1, num2;//변수선언 rand위에서 따로 해줘야함
	
	srand(time(NULL));//srand따로 적어주고, srand는 난수 생성 시점을 설정, srand안에 있는 숫자는 어떤 수가 나오든 항상 출력 값이 같음!

	num1 = rand() % 10;
	num2 = rand() % 10;//변수선언이랑 같이 쓰지 말고 밑에서 변수선언과 따로!


	if (num1 < num2){//복잡하게 생각하거나 경우의수 많이 나누지 말자! "num1이 크고 num2가 작다는 전제"로 그 경우가 아닌 다른 한 경우만 temp를 사용해서 바꿔주기!
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