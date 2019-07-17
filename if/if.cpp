#include <stdio.h>
int main(void)
{
	int num;

	printf("수를 입력하세요: ");//안내 메시지=친절한 프로그램
	scanf("%d", &num);

	if (num > 0)
		printf("%d는 양수입니다.\n", num);//%d를 써줘서 정확히 짚어주는게 더 친절한 프로그램
	else if (num == 0)
		printf("%d는 0입니다.\n", num);
	else 
		printf("%d는 음수입니다.\n", num);//밑의 중첩보다 이게 더 깔끔한 프로그램


	//else           //중첩 if문
	//	if (num == 0)
	//		printf("%d는 0입니다.", num);
	//	else
	//		printf("%d는 음수입니다.", num); 

	return 0;
}