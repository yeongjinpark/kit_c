////실행시간 측정
//#include<stdio.h>
//#include<time.h>
//#pragma warning(disable: 4996)
//
//int main() {
//	char str[100];
//	clock_t finish, start;
//	double duration;
//
//	printf("input \n");
//	start = clock();
//	scanf("%s",str);
//	finish = clock();
//	duration = (double)(finish - start) / CLOCKS_PER_SEC;
//	printf("걸린시간 : %lf초", duration);
//	return 0;
//}




////콘솔 미니 시계
//#include<stdio.h>
//#include<windows.h>
//#include<time.h>
//#pragma warning(disable: 4996)
//
//void GOtoXY(int x, int y) {
//	COORD CursorPosition = { x,y };
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CursorPosition);
//}
//
//void CursorHide(int size, BOOL flag) {
//	CONSOLE_CURSOR_INFO cursorinfo = { 0, };
//	cursorinfo.dwSize = size;
//	cursorinfo.bVisible = flag;
//	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorinfo);
//}
//
//int main(void) {
//	BOOL dot = TRUE;
//	int h, m, s;
//	int now_t;
//	system("title clock");
//	system("mode con: cols=30 lines=10");
//	CursorHide(1, FALSE);
//
//	while (1) {
//		now_t = (int)time(NULL);
//
//		//한국 시간:  세계표준시 +9
//		h = now_t / 3600 % 24 + 9;
//		if (h >= 24) h = h - 24;
//		m = now_t / 60 % 60;
//		s = now_t % 3600 % 60;
//
//		GOtoXY(8, 4);
//		printf("%02d  %02d   %02d", h, m, s);
//
//		GOtoXY(11, 4);
//		if (dot == TRUE) {
//			printf(":");
//			GOtoXY(16, 4);
//			printf(":");
//		}
//		else {
//			printf(" ");
//			GOtoXY(16, 4);
//			printf(" ");
//		}
//		//0.5초동안 콜론(:) 켜고 0.5초 후 끄는걸 반복
//		//콜론이 깜빡이게 ㅏㅁ
//		Sleep(500);
//		dot != dot; //한번은 투르 한번은 false 왔다갔다 하게
//	}
//	return 0;
//}


////방향키 처리 방법(1) +(wasd)
//#include<stdio.h>
//#include<windows.h>
//#pragma warning(disable: 4996)
//
//#define ARROW 224
//#define UP 72
//#define DOWN 80
//#define LEFT 75
//#define RIGHT 77
//
//int main(void) {
//	unsigned char key;
//	while (1) {
//		if (_kbhit() != 0) {  //키보드 눌러진것 확인
//			key = getch();
//			if (key == 'q' || key == 'Q') {
//				printf("종료\n");
//				break;
//			}
//			else if (key == ARROW) {
//				key = getch();
//				if (key == UP) {
//					printf("위(화살표키)\n");
//				}
//				else if (key == DOWN) {
//					printf("아래(화살표키)\n");
//				}
//				else if (key == LEFT) {
//					printf("왼쪽(화살표키)\n");
//				}
//				else if (key == RIGHT) {
//					printf("오른쪽(화살표키)\n");
//				}
//			}
//
//			else if (key == 'w' || key == 'W') {
//				printf("위(w)\n");
//			}
//			else if (key == 's' || key == 'S') {
//				printf("아래(S)\n");
//			}
//			else if (key == 'a' || key == 'A') {
//				printf("왼쪽(a)\n");
//			}
//			else if (key == 'd' || key == 'D') {
//				printf("오른쪽(d)\n");
//			}
//			else {
//				printf("화살표키 또는 wasd키를 눌러주세요");
//			}
//		}
//	}
//	return 0;
//}


//////방향키 처리 방법(2) GetAsynKeyState
//#include<stdio.h>
//#include<conio.h>
//#include<windows.h>
//#pragma warning(disable: 4996)
//
//#define X_MAX 50
//#define Y_MAX 24
//
////GetAsynKeyState(키의 코드): 특정키를 눌렀는지 체크
////방향 키: VK_UP/VK_LEFT/VK_DOWN/VK_RIGHT
//
////키가 눌러졌다면 최사위 비트를 1로 설정, 이전에 키가 눌러졌다면 최하위 비트 1
//// &0x0000: 이전에 누른적이 없고 호출 시점에 안 눌러진 상태
//// &0x8000: 이전에 누른적이 없고 호출 시점에 눌러진 상태
////&0x8001: 이전에 누른적이 있고 호출 시점에 눌러진 상태
//// &0x0001: 이전에 누른적이 있고 호출 시점에 안 눌러진 상태
//#define KEY_DOWN(vk_code) ((GetAsyncKeyState(vk_code) & 0x8001) ? 1: 0)
//
//void GOtoXY(int x, int y) {
//	COORD CursorPosition = { x,y };
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CursorPosition);
//}
//
//void CursorHide(int size, BOOL flag) {
//	CONSOLE_CURSOR_INFO cursorinfo = { 0, };
//	cursorinfo.dwSize = size;
//	cursorinfo.bVisible = flag;
//	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorinfo);
//}
//
//int main(void) {
//	unsigned char key;
//	system("mode con: cols=30 lines=10"); //콘솔 크기
//	CursorHide(1, FALSE);
//
//	//int x = X_MAX / 2, y = Y_MAX / 2;
//	int x = 25, y = 12;
//
//	while (1) {
//		if (KEY_DOWN(VK_LEFT)) {
//			if (x > 0) x--;
//		}
//		else if (KEY_DOWN(VK_RIGHT)) {
//			//if (x < X_MAX-2) x++;
//			if (x < 48) x++;
//		}
//		else if (KEY_DOWN(VK_UP)) {
//			if (y > 0) y--;
//		}
//		else if (KEY_DOWN(VK_DOWN)) {
//			//if (y < Y_MAX - 1) y++;
//			if (y < 23) y++;
//		}
//
//		GOtoXY(x, y);
//		printf("★");
//
//		Sleep(100);
//		system("cls");//화면지움
//	}
//	return 0;
//}
//
//




////////
#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<conio.h>
#pragma warning(disable: 4996)

#define KEY_DOWN(vk_code) ((GetAsyncKeyState(vk_code) & 0x8001) ? 1: 0)

int menu_pos = 1;

void GOtoXY(int x, int y) {
	COORD CursorPosition = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CursorPosition);
}

void CursorHide(int size, BOOL flag) {
	CONSOLE_CURSOR_INFO cursorinfo = { 0, };
	cursorinfo.dwSize = size;
	cursorinfo.bVisible = flag;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorinfo);
}

void PrintSelection(int x, int y, char *str, int total_len) {
	GOtoXY(x, y);
	printf("┌ ");
	for (int i = 0; i < total_len; i++) printf("─");
	printf(" ┐\n");

	GOtoXY(x, y + 1); //다음줄 이동
//  total_len=20이면
//  %-20s 문자 20칸 자리 만들어서 str내용 출력하고 나머지 빈칸은 공백으로 출력(왼쪽정렬)
// 숫자 20이 적히는 자리에 정수 변수가 들어가게 하고싶어서 %*s라고 코딩
	printf(" | %-*s | \n", total_len,str);

	GOtoXY(x, y + 2);
	printf(" └");
	for (int i = 0; i < total_len; i++) printf("─");
	printf(" ┘\n");
}

void EraseSelection(int x, int  y, char *str, int total_len) {
	GOtoXY(x, y);
	printf(" ");
	for (int i = 0; i < total_len; i++) printf(" ");
	printf(" \n");

	GOtoXY(x, y + 1);
	printf(" %-*s \n", total_len, str);

	GOtoXY(x, y + 2);
	printf(" ");
	for (int i = 0; i < total_len; i++) printf(" ");
	printf("\n");
}

void PrintDetail(int x, int y, char *str, int total_len) {
	GOtoXY(x, y);
	printf("┌ ");
	for (int i = 0; i < total_len; i++) printf("─");
	printf(" ┐");

	GOtoXY(x, y + 1);
	printf(" | %-*s | \n", total_len, "");

	GOtoXY(x, y + 2);
	printf(" | %-*s | \n", total_len, "");

	GOtoXY(x, y + 3);
	printf(" | %-*s | \n", total_len, "");

	GOtoXY(x, y + 4);
	printf(" | %-*s | \n", total_len, "");
	GOtoXY(x, y + 5);
	printf(" | %-*s | \n", total_len, str);

	GOtoXY(x, y + 6);
	printf(" | %-*s | \n", total_len, "");

	GOtoXY(x, y + 7);
	printf(" | %-*s | \n", total_len, "");

	GOtoXY(x, y + 8);
	printf(" └");
	for (int i = 0; i < total_len; i++) printf("─");
	printf(" ┘\n");
}

int main() {
	int i = 0;
	int x = 1, y = 5, total_len = 20;
	system("mode con: cols=50 lines=20");
	CursorHide(0, FALSE);

	while (1) {
		if (KEY_DOWN(VK_UP)) {
			if (menu_pos > 1) menu_pos--;
		}
		if (KEY_DOWN(VK_DOWN)) {
			if (menu_pos < 3)menu_pos++;
		}

		if (menu_pos == 1) {
			PrintSelection(x, y, "첫번째 메뉴", total_len);
			EraseSelection(x, y + 3, "두번째 메뉴", total_len);
			EraseSelection(x, y + 6, "세번쨰 메뉴", total_len);
			PrintDetail(x + 22, y, "첫번째 할 일", total_len);
		}

		else if (menu_pos == 2) {
			EraseSelection(x, y, "첫번째 메뉴", total_len);
			PrintSelection(x, y + 3, "두번째 메뉴", total_len);
			EraseSelection(x, y + 6, "세번쨰 메뉴", total_len);
			PrintDetail(x + 22, y, "두번째 할 일", total_len);
		}

		else if (menu_pos == 3) {
			EraseSelection(x, y, "첫번째 메뉴", total_len);
			EraseSelection(x, y + 3, "두번째 메뉴", total_len);
			PrintSelection(x, y + 6, "세번쨰 메뉴", total_len);
			PrintDetail(x + 22, y, "세번째 할 일", total_len);
		}
		else {
			EraseSelection(x, y, "첫번째 메뉴", total_len);
			EraseSelection(x, y + 3, "두번째 메뉴", total_len);
			EraseSelection(x, y + 6, "세번쨰 메뉴", total_len);
			PrintDetail(x + 22, y, " ", total_len);
		}
		Sleep(500);
	}
	return 0;
}



////소리내기-beep(한 옥타브)
//#include<windows.h>
//
//#define DO 261
//#define RE 293
//#define MI 329
//#define FA 349
//#define SOL 391
//#define RA 440
//#define SI 493
//#define DDO 523
//
//int main(void) {
//	Beep(DO, 200);
//	Beep(RE, 200);
//	Beep(MI, 200);
//	Beep(FA, 200);
//	Beep(SOL, 200);
//	Beep(FA, 200);
//	Beep(SI, 200);
//	Beep(DDO, 200);
//
//	return 0;
//}


//////소리내기-beep(키보드 연주)
//#include<stdio.h>
//#include<conio.h>
//#include<windows.h>
//#pragma warning(disable: 4996)
//
//#define DO 261
//#define RE 293
//#define MI 329
//#define FA 349
//#define SOL 391
//#define RA 440
//#define SI 493
//#define DDO 523
//
//#define iRE 587
//#define iMI 659
//#define iFA 698
//#define iSOL 783
//#define iRA 880
//#define iSI 987
//#define iDDO 1046
//
//
//int main(void) {
//	char key = 0;
//	printf("도(a/A) 레(s/S) 미(d/D) 파(f/F) 솔(g/G) 라(h/H) 시(j/J) 도(k/K)로 연주\n");
//	while (1) {
//		key = getch();
//
//		switch(key){
//		case 'a':
//		case 'A': Beep(DO, 200); break;
//
//		case 's':
//		case 'S': Beep(RE, 200); break;
//
//		case 'd':
//		case 'D': Beep(MI, 200); break;
//
//		case 'f':
//		case 'F': Beep(FA, 200); break;
//
//		case 'g':
//		case 'G': Beep(SOL , 200); break;
//
//		case 'h':
//		case 'H': Beep(RA, 200); break;
//
//		case 'j':
//		case 'J': Beep(SI, 200); break;
//
//		case 'k':
//		case 'K': Beep(DDO, 200); break;
//
//
//
//		case 'z':
//		case 'Z': Beep(iRE, 200); break;
//
//		case 'x':
//		case 'X': Beep(iMI, 200); break;
//
//		case 'c':
//		case 'C': Beep(iFA, 200); break;
//
//		case 'v':
//		case 'V': Beep(iSOL, 200); break;
//
//		case 'b':
//		case 'B': Beep(iRA, 200); break;
//
//		case 'n':
//		case 'N': Beep(iSI, 200); break;
//
//		case 'm':
//		case 'M': Beep(iDDO, 200); break;
//
//		}
//	}
//	return 0;
//}









////소리 내기-playSound(테스트 코드)
//#include<stdio.h>
//#include<windows.h>
//#include<mmsystem.h>
//#pragma comment(lib,"winmm.lib")
//
//int main(void) {
//	while (1) {
//		PlaySound("systemHand", 0, SND_ASYNC | SND_ALIAS);
//		//시스템 오류 사운드를 비동기모드로 연주
//		Sleep(2000);
//
//		//PlaySound("systemStart", 0, SND_ASYNC | SND_ALIAS);
//		PlaySound((LPCTSTR)SND_ALIAS_SYSTEMSTART, 0, SND_ASYNC | SND_ALIAS_ID);
//		//"시스템 시작" 사운드를 비동기모드로 연주
//		Sleep(2000);
//
//		//소스파일과 같은 위치에 wav파일이 있다면 파일 이름만 적음 
//		//PlaySound(TEXT("Alarm10.wav"),NULL, SND_ASYNC | SND_LOOP);
//	
//		PlaySound(TEXT("C:\\Windows\\Media\\Alarm10.wav"), NULL, SND_ASYNC | SND_LOOP);
//		Sleep(3000);
//	}
//	return 0;
//}