////1번
//#include<stdio.h>
//#pragma warning(disable: 4996)
//
//typedef struct product {  
//	char goods[100];
//	int quantity;
//	int price;
//
//};       
//
//
//int main() {
//	struct product menu[3] = { {"컴퓨터",8,155}, {"모니터",6,89}, {"키보드",7,23} };
//	
//	int i=0;        
//	int total_price[100];
//
//
//
//	printf("[상품명     수량    단가     총액\n");
//
//	for (i = 0; i < 3; i++) {              
//		total_price[i] = menu[i].quantity * menu[i].price;
//	
//		printf("%s      %d       %d      %d\n", menu[i].goods, menu[i].quantity, menu[i].price, total_price[i]);
//	}
//
//
//}



////2번
//#include<stdio.h>
//#pragma warning(disable: 4996)
//
//
//typedef struct data {  
//	char name[100];
//	int height;
//	int weight;
//};
//
//
//int main() {
//	struct data chart[5] = { {"Jung" ,160, 41.2}, {"Park",165 ,38.7}, {"Lee",150, 35.6}, {"Sin",148, 32.7} , {"Kim",155, 28.9} };
//	int i;        //반복을 위한 i변수선언
//	int max = 0,min=100, k,m;
//	for (i = 0; i < 5; i++) {               //3번 반복하는 루프 생성
//		printf("%s %d %d\n", chart[i].name, chart[i].height, chart[i].weight);
//		}
//
//	for (i = 0; i < 5; i++) {
//		if (max < chart[i].height) {
//			max = chart[i].height;
//			k = i;
//		}
//
//		if (min > chart[i].weight) {
//			min = chart[i].weight;
//			m = i;
//		}
//	}
//	printf("가장 키가 큰 사람은 %s입니다.\n",chart[k].name);
//	printf("가장 몸무게가 가벼운 사람은 %s입니다.\n", chart[m].name);
//	}



//3번
#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable: 4996)


typedef struct first {  
	int x;
	int y;
};

typedef struct second {
	struct first a;
	struct first b;
};

int main(void) {
	struct second coordinate;
	int i = 0, k=0;

	for (i = 0; i < 2; i++) {
		printf("%d번째 점의 좌표를 입력하세요(x y):", i+1);
		if (i == 0) {
			scanf("%d %d", &coordinate.a.x, &coordinate.a.y);
		}
		if(i == 1) {
			scanf("%d %d", &coordinate.b.x, &coordinate.b.y);
		}
		
	}


	printf("x좌표 차이는 %d이고, y좌표 차이는 %d입니다.\n", abs(coordinate.a.x - coordinate.b.x), abs(coordinate.a.y - coordinate.b.y));


}



