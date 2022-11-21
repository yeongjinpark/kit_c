#include<stdio.h>
#pragma warning(disable: 4996)

void square1();  //사용자 정의 함수 선언

int main() {
	int i, n;  

	printf("반복하고자 하는 횟수를 입력하세요: ");  //해당문구 출력
	scanf("%d", &n);                               //반복하고자 하는 횟수 입력

	for (i = 0; i < n; i++) {                      //입력한 횟수만큼 반복
		square1();                             //사용자 정의 함수 호출
	}

}

void square1() {                                    //사용자 정의 함수 선언
	static int num = 0;                            //static정적 변수 선언, 초기화
	num++;                                         //선언한 정적 변수 1씩 증가
	printf("%d 번째 함수 호출- %d의 제곱수는 %d입니다.\n", num, num, num*num);  //해당문구 출력
}