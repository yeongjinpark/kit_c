////����ð� ����
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
//	printf("�ɸ��ð� : %lf��", duration);
//	return 0;
//}




////�ܼ� �̴� �ð�
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
//		//�ѱ� �ð�:  ����ǥ�ؽ� +9
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
//		//0.5�ʵ��� �ݷ�(:) �Ѱ� 0.5�� �� ���°� �ݺ�
//		//�ݷ��� �����̰� ����
//		Sleep(500);
//		dot != dot; //�ѹ��� ���� �ѹ��� false �Դٰ��� �ϰ�
//	}
//	return 0;
//}


////����Ű ó�� ���(1) +(wasd)
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
//		if (_kbhit() != 0) {  //Ű���� �������� Ȯ��
//			key = getch();
//			if (key == 'q' || key == 'Q') {
//				printf("����\n");
//				break;
//			}
//			else if (key == ARROW) {
//				key = getch();
//				if (key == UP) {
//					printf("��(ȭ��ǥŰ)\n");
//				}
//				else if (key == DOWN) {
//					printf("�Ʒ�(ȭ��ǥŰ)\n");
//				}
//				else if (key == LEFT) {
//					printf("����(ȭ��ǥŰ)\n");
//				}
//				else if (key == RIGHT) {
//					printf("������(ȭ��ǥŰ)\n");
//				}
//			}
//
//			else if (key == 'w' || key == 'W') {
//				printf("��(w)\n");
//			}
//			else if (key == 's' || key == 'S') {
//				printf("�Ʒ�(S)\n");
//			}
//			else if (key == 'a' || key == 'A') {
//				printf("����(a)\n");
//			}
//			else if (key == 'd' || key == 'D') {
//				printf("������(d)\n");
//			}
//			else {
//				printf("ȭ��ǥŰ �Ǵ� wasdŰ�� �����ּ���");
//			}
//		}
//	}
//	return 0;
//}


//////����Ű ó�� ���(2) GetAsynKeyState
//#include<stdio.h>
//#include<conio.h>
//#include<windows.h>
//#pragma warning(disable: 4996)
//
//#define X_MAX 50
//#define Y_MAX 24
//
////GetAsynKeyState(Ű�� �ڵ�): Ư��Ű�� �������� üũ
////���� Ű: VK_UP/VK_LEFT/VK_DOWN/VK_RIGHT
//
////Ű�� �������ٸ� �ֻ��� ��Ʈ�� 1�� ����, ������ Ű�� �������ٸ� ������ ��Ʈ 1
//// &0x0000: ������ �������� ���� ȣ�� ������ �� ������ ����
//// &0x8000: ������ �������� ���� ȣ�� ������ ������ ����
////&0x8001: ������ �������� �ְ� ȣ�� ������ ������ ����
//// &0x0001: ������ �������� �ְ� ȣ�� ������ �� ������ ����
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
//	system("mode con: cols=30 lines=10"); //�ܼ� ũ��
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
//		printf("��");
//
//		Sleep(100);
//		system("cls");//ȭ������
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
	printf("�� ");
	for (int i = 0; i < total_len; i++) printf("��");
	printf(" ��\n");

	GOtoXY(x, y + 1); //������ �̵�
//  total_len=20�̸�
//  %-20s ���� 20ĭ �ڸ� ���� str���� ����ϰ� ������ ��ĭ�� �������� ���(��������)
// ���� 20�� ������ �ڸ��� ���� ������ ���� �ϰ�; %*s��� �ڵ�
	printf(" | %-*s | \n", total_len,str);

	GOtoXY(x, y + 2);
	printf(" ��");
	for (int i = 0; i < total_len; i++) printf("��");
	printf(" ��\n");
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
	printf("�� ");
	for (int i = 0; i < total_len; i++) printf("��");
	printf(" ��");

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
	printf(" ��");
	for (int i = 0; i < total_len; i++) printf("��");
	printf(" ��\n");
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
			PrintSelection(x, y, "ù��° �޴�", total_len);
			EraseSelection(x, y + 3, "�ι�° �޴�", total_len);
			EraseSelection(x, y + 6, "������ �޴�", total_len);
			PrintDetail(x + 22, y, "ù��° �� ��", total_len);
		}

		else if (menu_pos == 2) {
			EraseSelection(x, y, "ù��° �޴�", total_len);
			PrintSelection(x, y + 3, "�ι�° �޴�", total_len);
			EraseSelection(x, y + 6, "������ �޴�", total_len);
			PrintDetail(x + 22, y, "�ι�° �� ��", total_len);
		}

		else if (menu_pos == 3) {
			EraseSelection(x, y, "ù��° �޴�", total_len);
			EraseSelection(x, y + 3, "�ι�° �޴�", total_len);
			PrintSelection(x, y + 6, "������ �޴�", total_len);
			PrintDetail(x + 22, y, "����° �� ��", total_len);
		}
		else {
			EraseSelection(x, y, "ù��° �޴�", total_len);
			EraseSelection(x, y + 3, "�ι�° �޴�", total_len);
			EraseSelection(x, y + 6, "������ �޴�", total_len);
			PrintDetail(x + 22, y, " ", total_len);
		}
		Sleep(500);
	}
	return 0;
}



////�Ҹ�����-beep(�� ��Ÿ��)
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


//////�Ҹ�����-beep(Ű���� ����)
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
//	printf("��(a/A) ��(s/S) ��(d/D) ��(f/F) ��(g/G) ��(h/H) ��(j/J) ��(k/K)�� ����\n");
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









////�Ҹ� ����-playSound(�׽�Ʈ �ڵ�)
//#include<stdio.h>
//#include<windows.h>
//#include<mmsystem.h>
//#pragma comment(lib,"winmm.lib")
//
//int main(void) {
//	while (1) {
//		PlaySound("systemHand", 0, SND_ASYNC | SND_ALIAS);
//		//�ý��� ���� ���带 �񵿱���� ����
//		Sleep(2000);
//
//		//PlaySound("systemStart", 0, SND_ASYNC | SND_ALIAS);
//		PlaySound((LPCTSTR)SND_ALIAS_SYSTEMSTART, 0, SND_ASYNC | SND_ALIAS_ID);
//		//"�ý��� ����" ���带 �񵿱���� ����
//		Sleep(2000);
//
//		//�ҽ����ϰ� ���� ��ġ�� wav������ �ִٸ� ���� �̸��� ���� 
//		//PlaySound(TEXT("Alarm10.wav"),NULL, SND_ASYNC | SND_LOOP);
//	
//		PlaySound(TEXT("C:\\Windows\\Media\\Alarm10.wav"), NULL, SND_ASYNC | SND_LOOP);
//		Sleep(3000);
//	}
//	return 0;
//}