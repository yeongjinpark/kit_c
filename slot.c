//
#include<stdio.h>
#include<time.h>
#pragma warning (disable: 4996)

int main(void) {
	int n, i, k, j;
	int f_size , su = 10;
	int data;

	int ary[5];
	char str[100];
	char arr[100];

	FILE* fp1,*fp2,*fp3,*fp4,*afp,*bfp;
	errno_t err1;
	errno_t err2;
	errno_t err3;
	errno_t err4;

	err1 = fopen_s(&fp1, "file.txt", "a+t");
	err2 = fopen_s(&fp2, "fff.txt", "rb");
	err3=fopen_s(&fp3,"winner.dat","a+");
	err4= fopen_s(&fp4, "loser.dat", "a+");
	srand(time(NULL));

		if (NULL != fp1) {

			printf("���Ըӽ��忡 �� �� ȯ���մϴ�.\n");

			printf("������ ���: ");
			while (NULL != fgets(str, sizeof(str), fp1)) {
				printf("%s", str);
			}

			printf("\n�̸��� �Է��Ͽ� ������ ��ܿ� ������ּ���: ");
			gets_s(str, sizeof(str));

			printf("%s�� ���Ըӽ� ���\n", str);
			for (i = 0; str[i] != NULL; i++) {
				fputc(str[i], fp1);
			}

			if (NULL != fp2) {
				for (j = 0; j < 3; j++) {
					k = rand() % 10;
					ary[j] = k;
				}

				for (j = 0; j < 3; j++) {
					fseek(fp2, ary[j], SEEK_SET);
					f_size = ftell(fp2);
					printf("%d ", f_size);
				}
				printf("\n");

				if (ary[0] == ary[1] && ary[1]==ary[2]) {
					afp = fopen("winner.txt", "wt");
					fprintf(afp, "%s", str);

					fp3 = fopen("a.txt", "wb");
					fwrite(str, sizeof(str), 1, fp3);
					fclose(afp);
					fclose(fp3);

					fp3 = fopen("a.txt", "rb");
					fread(&arr, sizeof(arr), 1, fp3);
					fclose(fp3);	
					
					if (ary[0] == 7) {
						printf("�����մϴ�.%s\n!!!!!����!!!!!\n",arr);
					}
					else {
						printf("�����մϴ�. %s ��÷\n",arr);
					}

					
				}

				else {
					bfp = fopen("loser.txt", "wt");
					fprintf(bfp, "%s", str);

					fp4 = fopen("b.txt", "wb");
					fwrite(str, sizeof(str), 1, fp4);
					fclose(bfp);
					fclose(fp4);

					fp4 = fopen("b.txt", "rb");
					fread(&arr, sizeof(arr), 1, fp4);
					fclose(fp4);

					printf("%s�� ���� ��ȸ��...\n",arr);
				
				}
				fclose(fp2);
			}


			fclose(fp1);
		}


		else
			printf("���� �������\n");


	return 0;
}
//
//
////#include<stdio.h>
////
////int main(void) {
////	int su = 10;
////	int i;
////	int data;
////	char str[100];
////	int su_list[3] = { 1,2,3 };
////	FILE *fb;
////	errno_t err;
////
////	err = fopen_s(&fb, "bi.dat", "a+");
////
////	if (NULL != fb) {
////		printf("����\n");
////
////		printf("\n�̸��� �Է��Ͽ� ������ ��ܿ� ������ּ���: ");
////			gets_s(str, sizeof(str));
////
////		for (i = 0; str[i] != NULL; i++) {
////				fputc(str[i], fb);
////		}
////
////		fwrite(&su, sizeof(int), 1, fb);
////		fwrite(su_list, sizeof(int), 3, fb);
////
////		fread(&data, sizeof(int), 1, fb);
////
////		fclose(fb);
////		printf("������: %d(0x%04x) %s\n", data, data,str);
////	}
////	else
////		printf("����\n");
////
////	return 0;
////}
//
//
//
//
////#include<stdio.h>
////
////int main(void) {
////	int su = 10;
////	int data;
////	int su_list[3] = { 1,2,3 };
////	FILE *fb;
////	errno_t err;
////
////	err = fopen_s(&fb, "bi.dat", "rb");
////
////	if (NULL != fb) {
////		printf("����\n");
////
////		fwrite(&su, sizeof(int), 1, fb);
////		fwrite(su_list, sizeof(int), 3, fb);
////
////		fread(&data, sizeof(int), 1, fb);
////
////		fclose(fb);
////		printf("������: %d(0x%04x)\n", data, data);
////	}
////	else
////		printf("����\n");
////
////	return 0;
////}




//#include <stdio.h>
//#pragma warning(disable:4996)
//
//int main(void) {
//	FILE *afp, *bfp;
//	int num = 10;
//	char str[100];
//	char arr[100];
//	int res;
//
//	gets_s(str, sizeof(str));
//
//	afp = fopen("a.txt", "wt");
//	fprintf(afp, "%d", str);
//
//	bfp = fopen("b.txt", "wb");
//	fwrite(str, sizeof(str), 1, bfp);
//	fclose(afp);
//	fclose(bfp);
//
//	bfp = fopen("b.txt", "rb");
//	fread(&arr, sizeof(arr), 1, bfp);
//	printf("%s", arr);
//
//	fclose(bfp);
//	return 0;
//}