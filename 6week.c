//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#pragma warning (disable: 4996)
//
//typedef struct schedule {
//	char day[100];
//	int start_time;
//	int end_time;
//	char plan[100];
//}SCHEDULE;
//
//
//void show(SCHEDULE s, int k, int j);
//
//char d[7][20] = { {"������"}, {"ȭ����"}, {"������"},{"�����"}, {"�ݿ���"},{"�����"}, {"�Ͽ���"} };
//
//int main() {
//	int num, i, x = 0, sc = 0;
//	char sel[100];
//
//	SCHEDULE a[7][100] = { {"������",14,16,"C���"},{"ȭ����",13,15,"��ϱ�"},{"������",15,17,"����������Ʈ"},{"�����",10,12,"���� ����"},{"�ݿ���",18,20,"ģ������"},{"�����",11,17,"�ٱ�����"},{"�Ͽ���",15,17,"������Ÿ��"} };
//	int scheduleCNT[7] = { 1,1,1,1,1,1,1 };
//
//	while (1) {
//
//		printf("=====�ְ� ������ ����=====\n\n");
//
//		printf("1. �̹��� ������ ����\n2. ������ �߰��ϱ�\n3. ������ �����ϱ�\n4. ������ �� �߰��ϱ�\n5. �����ϱ�\n");
//
//
//		printf("\n�������ּ���: ");
//		scanf("%d", &num);
//
//		switch (num)
//		{
//			////////////////////////////////////������ ����/////////////////////////////////////////
//		case 1:
//			printf("\n�����ٺ��� ����\n\n");
//			printf("�̹��� �������� ������ �����ϴ�.\n\n");
//
//			for (i = 0; i < 7; i++) {
//				for (int sc = 0; sc < scheduleCNT[i]; sc++) {
//					show(a[i][sc], sc, i);
//				}
//			}
//
//			break;
//
//			///////////////////////////////������ �߰�/////////////////////////////////
//		case 2:
//			printf("\n������ �߰��ϱ� ����\n");
//			printf("���� ���Ͽ� �������� �߰��Ͻðڽ���?");
//			//scanf("%d", &x);
//			//printf("\n");
//			scanf("%s", &sel);
//
//
//
//			if (strcmp(sel, d[0]) == 0) {
//				x = 1;
//			}
//
//			else if (strcmp(sel, d[1]) == 0) {
//				x = 2;
//			}
//
//			else if (strcmp(sel, d[2]) == 0) {
//				x = 3;
//			}
//
//			else if (strcmp(sel, d[3]) == 0) {
//				x = 4;
//			}
//
//			else if (strcmp(sel, d[4]) == 0) {
//				x = 5;
//			}
//
//			else if (strcmp(sel, d[5]) == 0) {
//				x = 6;
//			}
//
//			else if (strcmp(sel, d[6]) == 0) {
//				x = 7;
//			}
//
//			printf("�߰��� ������ �Է����ּ���: ");
//			scanf(" %d %d %s", &a[x - 1][0].start_time, &a[x - 1][0].end_time, &a[x - 1][0].plan);
//
//
//			printf(" %s������ �߰��Ǿ����ϴ�. \n\n", a[x - 1][0].day);
//
//			for (i = 0; i < 7; i++) {
//				sc = 0;
//				show(a[i][sc], sc, i);
//			}
//
//			break;
//
//
//			//////////////////////////������ ����///////////////////////////
//		case 3:
//			printf("\n������ �����ϱ� ����\n");
//			printf("���� ������ �������� �����Ͻðڽ��ϱ�? ");
//			scanf("%s", &sel);
//			printf("\n");
//
//			if (strcmp(sel, d[0]) == 0) {
//				x = 1;
//			}
//
//			else if (strcmp(sel, d[1]) == 0) {
//				x = 2;
//			}
//
//			else if (strcmp(sel, d[2]) == 0) {
//				x = 3;
//			}
//
//			else if (strcmp(sel, d[3]) == 0) {
//				x = 4;
//			}
//
//			else if (strcmp(sel, d[4]) == 0) {
//				x = 5;
//			}
//
//			else if (strcmp(sel, d[5]) == 0) {
//				x = 6;
//			}
//
//			else if (strcmp(sel, d[6]) == 0) {
//				x = 7;
//			}
//
//
//			for (i = 0; i < 7; i++) {
//				for (int sc = 0; sc < scheduleCNT[i]; sc++) {
//					if (i == x - 1) {
//						a[x - 1][sc].start_time = 0;
//						a[x - 1][sc].end_time = 0;
//						strcpy(a[x - 1][sc].plan, " ");
//					}
//				}
//			}
//
//
//			for (i = 0; i < 7; i++) {
//				for (int sc = 0; sc < scheduleCNT[i]; sc++) {
//				
//						show(a[i][sc], sc, i);
//					
//
//
//				}
//			}
//
//			break;
//
//		case 4:
//			///////////////////////////////////////������ �� �ֱ�////////////////////////////////////////////////
//			printf("\n������ �� �߰��ϱ� ����\n");
//			printf("���� ���Ͽ� �������� �� �߰��Ͻðڽ���?");
//			scanf("%s", &sel);
//
//			if (strcmp(sel, d[0]) == 0) {
//				x = 1;
//			}
//
//			else if (strcmp(sel, d[1]) == 0) {
//				x = 2;
//			}
//
//			else if (strcmp(sel, d[2]) == 0) {
//				x = 3;
//			}
//
//			else if (strcmp(sel, d[3]) == 0) {
//				x = 4;
//			}
//
//			else if (strcmp(sel, d[4]) == 0) {
//				x = 5;
//			}
//
//			else if (strcmp(sel, d[5]) == 0) {
//				x = 6;
//			}
//
//			else if (strcmp(sel, d[6]) == 0) {
//				x = 7;
//			}
//
//			printf("�߰��� ������ �Է����ּ���: ");
//			scanf(" %d %d %s", &a[x - 1][scheduleCNT[x - 1]].start_time, &a[x - 1][scheduleCNT[x - 1]].end_time, &a[x - 1][scheduleCNT[x - 1]].plan);
//			
//			scheduleCNT[x - 1]++;
//			
//			printf(" %s������ �߰��Ǿ����ϴ�. \n\n", a[x - 1][0].day);
//			
//			for (i = 0; i < 7; i++) {
//				for (int sc = 0; sc < scheduleCNT[i]; sc++) {
//					show(a[i][sc], sc, i);
//				}
//			}
//			
//			break;
//
//			///////////////////////////����///////////////////////////////////
//		case 5:
//			printf("\n�����ϱ�\n");
//			return 0;
//			break;
//
//
//		default:
//			printf("\n�ٽ� �������ּ���\n\n");
//			break;
//		}
//
//	}
//
//}
//
//
//void show(SCHEDULE s, int k, int j) {
//
//
//	if (k == 0) {
//		printf("%d. %s: ", j + 1, s.day);
//		printf("%d��~%d�� %s\n", s.start_time, s.end_time, s.plan);
//	}
//	else {
//		if (s.start_time != 0) {
//			printf("%13d��~%d�� %s\n", s.start_time, s.end_time, s.plan);
//		}
//	}
//
//}
//
//
