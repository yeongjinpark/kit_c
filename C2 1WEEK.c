//
//////배열문제 #1- 2차원 배열
////#include<stdio.h>
////#pragma warning(disable: 4996)
////
////int main(){
////	int i, j;
////	int x, y;
////	int arr[100][100];
////	
////	for (i = 1; i <= 4; i++) {
////		for (j = 1; j <= 9; j++) {
////			if (i != 1) {
////				arr[i][j] = j * i;
////			}
////			else {
////				arr[i][j] = j;
////			}
////		}
////	}
////
////	for (i = 1; i <= 4; i++) {
////		for (j = 1; j <= 9; j++) {
////			printf("%d ", arr[i][j]);
////		}
////		printf("\n");
////	}
////	
////	while (1) {
////		printf("찾고싶은 가로, 세로 위치를 입력하세요(0 0은 종료): ");
////
////		scanf("%d %d", &x, &y);
////
////		if (x == 0 && y == 0) {
////			printf("종료되었습니다.\n");
////			break;
////		}
////		else {
////			printf("가로 %d번째 세로 %d번째 = %d\n", x, y, arr[y][x]);
////		}
////		
////	}
////}
//
//
////배열 문제#2 - 2차원 배열
//#include<stdio.h>
//#pragma warning(disable: 4996)
//
//int main() {
//	int i, j, k = 1, n, m;
//	int x, y;
//	int arr[10][10];
//
//	while (1) {
//		printf("N을 입력하세요(0 입력하면 종료): ");
//		scanf("%d", &n);
//		k = 1;
//
//		if (n == 0) {
//			printf("종료되었습니다.");
//			break;
//		}
//
//		for (i = 1; i <= n; i++) {
//			m = n;
//			for (j = 1; j <= n; j++) {
//
//				if (i % 2 == 1) {
//					arr[i][j] = k;
//					k++;
//				}
//				else {
//					arr[i][m] = k;
//					m--;
//					k++;
//				}
//			}
//		}
//
//		for (i = 1; i <= n; i++) {
//			for (j = 1; j <= n; j++) {
//				printf("%d ", arr[i][j]);
//			}
//			printf("\n");
//		}
//
//	}
//}


////배열 문제#3 - 2차원 배열
//#include<stdio.h>
//#pragma warning(disable: 4996)
//
//int main() {
//	int i, j, k = 1, n, m;
//	int x, y;
//	int arr[100][100];
//
//	while (1) {
//		printf("N을 입력하세요(0 입력하면 종료): ");
//		scanf("%d", &n);
//		k = 1;
//
//		if (n == 0) {
//			printf("종료되었습니다.");
//			break;
//		}
//
//		for (i = 1; i <= n; i++) {
//			m = n;
//			for (j = 1; j <= n; j++) {
//
//				if (i % 2 == 1) {
//					arr[j][i] = k;
//					k++;
//				}
//				else {
//					arr[m][i] = k;
//					m--;
//					k++;
//				}
//			}
//		}
//				for (i = 1; i <= n; i++) {
//			for (j = 1; j <= n; j++) {
//				printf("%d ", arr[i][j]);
//			}
//			printf("\n");
//		}
//
//	}
//}



//배열문제#4- 배열+문자열
#include<stdio.h>
#pragma warning(disable: 4996)

int main(void) {
	char str[100];
	
	printf("주민등록번호를 입력하세요(-없이 13자리):");
	gets_s(str, sizeof(str));

	puts(str);

}