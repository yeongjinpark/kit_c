//
//////�迭���� #1- 2���� �迭
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
////		printf("ã����� ����, ���� ��ġ�� �Է��ϼ���(0 0�� ����): ");
////
////		scanf("%d %d", &x, &y);
////
////		if (x == 0 && y == 0) {
////			printf("����Ǿ����ϴ�.\n");
////			break;
////		}
////		else {
////			printf("���� %d��° ���� %d��° = %d\n", x, y, arr[y][x]);
////		}
////		
////	}
////}
//
//
////�迭 ����#2 - 2���� �迭
//#include<stdio.h>
//#pragma warning(disable: 4996)
//
//int main() {
//	int i, j, k = 1, n, m;
//	int x, y;
//	int arr[10][10];
//
//	while (1) {
//		printf("N�� �Է��ϼ���(0 �Է��ϸ� ����): ");
//		scanf("%d", &n);
//		k = 1;
//
//		if (n == 0) {
//			printf("����Ǿ����ϴ�.");
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


////�迭 ����#3 - 2���� �迭
//#include<stdio.h>
//#pragma warning(disable: 4996)
//
//int main() {
//	int i, j, k = 1, n, m;
//	int x, y;
//	int arr[100][100];
//
//	while (1) {
//		printf("N�� �Է��ϼ���(0 �Է��ϸ� ����): ");
//		scanf("%d", &n);
//		k = 1;
//
//		if (n == 0) {
//			printf("����Ǿ����ϴ�.");
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



//�迭����#4- �迭+���ڿ�
#include<stdio.h>
#pragma warning(disable: 4996)

int main(void) {
	char str[100];
	
	printf("�ֹε�Ϲ�ȣ�� �Է��ϼ���(-���� 13�ڸ�):");
	gets_s(str, sizeof(str));

	puts(str);

}