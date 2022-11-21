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
//char d[7][20] = { {"월요일"}, {"화요일"}, {"수요일"},{"목요일"}, {"금요일"},{"토요일"}, {"일요일"} };
//
//int main() {
//	int num, i, x = 0, sc = 0;
//	char sel[100];
//
//	SCHEDULE a[7][100] = { {"월요일",14,16,"C언어"},{"화요일",13,15,"운동하기"},{"수요일",15,17,"설계프로젝트"},{"목요일",10,12,"영어 공부"},{"금요일",18,20,"친구모임"},{"토요일",11,17,"근교여행"},{"일요일",15,17,"자전거타기"} };
//	int scheduleCNT[7] = { 1,1,1,1,1,1,1 };
//
//	while (1) {
//
//		printf("=====주간 스케줄 관리=====\n\n");
//
//		printf("1. 이번주 스케줄 보기\n2. 스케줄 추가하기\n3. 스케줄 삭제하기\n4. 스케줄 더 추가하기\n5. 종료하기\n");
//
//
//		printf("\n선택해주세요: ");
//		scanf("%d", &num);
//
//		switch (num)
//		{
//			////////////////////////////////////스케줄 보기/////////////////////////////////////////
//		case 1:
//			printf("\n스케줄보기 선택\n\n");
//			printf("이번주 스케줄은 다음과 같습니다.\n\n");
//
//			for (i = 0; i < 7; i++) {
//				for (int sc = 0; sc < scheduleCNT[i]; sc++) {
//					show(a[i][sc], sc, i);
//				}
//			}
//
//			break;
//
//			///////////////////////////////스케줄 추가/////////////////////////////////
//		case 2:
//			printf("\n스케줄 추가하기 선택\n");
//			printf("무슨 요일에 스케줄을 추가하시겠습까?");
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
//			printf("추가할 일정을 입력해주세요: ");
//			scanf(" %d %d %s", &a[x - 1][0].start_time, &a[x - 1][0].end_time, &a[x - 1][0].plan);
//
//
//			printf(" %s일정이 추가되었습니다. \n\n", a[x - 1][0].day);
//
//			for (i = 0; i < 7; i++) {
//				sc = 0;
//				show(a[i][sc], sc, i);
//			}
//
//			break;
//
//
//			//////////////////////////스케줄 삭제///////////////////////////
//		case 3:
//			printf("\n스케줄 삭제하기 선택\n");
//			printf("무슨 요일의 스케줄을 삭제하시겠습니까? ");
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
//			///////////////////////////////////////스케줄 더 넣기////////////////////////////////////////////////
//			printf("\n스케줄 더 추가하기 선택\n");
//			printf("무슨 요일에 스케줄을 더 추가하시겠습까?");
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
//			printf("추가할 일정을 입력해주세요: ");
//			scanf(" %d %d %s", &a[x - 1][scheduleCNT[x - 1]].start_time, &a[x - 1][scheduleCNT[x - 1]].end_time, &a[x - 1][scheduleCNT[x - 1]].plan);
//			
//			scheduleCNT[x - 1]++;
//			
//			printf(" %s일정이 추가되었습니다. \n\n", a[x - 1][0].day);
//			
//			for (i = 0; i < 7; i++) {
//				for (int sc = 0; sc < scheduleCNT[i]; sc++) {
//					show(a[i][sc], sc, i);
//				}
//			}
//			
//			break;
//
//			///////////////////////////종료///////////////////////////////////
//		case 5:
//			printf("\n종료하기\n");
//			return 0;
//			break;
//
//
//		default:
//			printf("\n다시 선택해주세요\n\n");
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
//		printf("%d시~%d시 %s\n", s.start_time, s.end_time, s.plan);
//	}
//	else {
//		if (s.start_time != 0) {
//			printf("%13d시~%d시 %s\n", s.start_time, s.end_time, s.plan);
//		}
//	}
//
//}
//
//
