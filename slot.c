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

			printf("슬롯머신장에 온 걸 환영합니다.\n");

			printf("참가자 명단: ");
			while (NULL != fgets(str, sizeof(str), fp1)) {
				printf("%s", str);
			}

			printf("\n이름을 입력하여 참가자 명단에 등록해주세요: ");
			gets_s(str, sizeof(str));

			printf("%s의 슬롯머신 결과\n", str);
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
						printf("축하합니다.%s\n!!!!!잭팟!!!!!\n",arr);
					}
					else {
						printf("축하합니다. %s 당첨\n",arr);
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

					printf("%s는 다음 기회에...\n",arr);
				
				}
				fclose(fp2);
			}


			fclose(fp1);
		}


		else
			printf("파일 열기실패\n");


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
////		printf("성공\n");
////
////		printf("\n이름을 입력하여 참가자 명단에 등록해주세요: ");
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
////		printf("데이터: %d(0x%04x) %s\n", data, data,str);
////	}
////	else
////		printf("실패\n");
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
////		printf("성공\n");
////
////		fwrite(&su, sizeof(int), 1, fb);
////		fwrite(su_list, sizeof(int), 3, fb);
////
////		fread(&data, sizeof(int), 1, fb);
////
////		fclose(fb);
////		printf("데이터: %d(0x%04x)\n", data, data);
////	}
////	else
////		printf("실패\n");
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