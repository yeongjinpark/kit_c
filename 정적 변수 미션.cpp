#include<stdio.h>
#pragma warning(disable: 4996)

void square1();  //����� ���� �Լ� ����

int main() {
	int i, n;  

	printf("�ݺ��ϰ��� �ϴ� Ƚ���� �Է��ϼ���: ");  //�ش繮�� ���
	scanf("%d", &n);                               //�ݺ��ϰ��� �ϴ� Ƚ�� �Է�

	for (i = 0; i < n; i++) {                      //�Է��� Ƚ����ŭ �ݺ�
		square1();                             //����� ���� �Լ� ȣ��
	}

}

void square1() {                                    //����� ���� �Լ� ����
	static int num = 0;                            //static���� ���� ����, �ʱ�ȭ
	num++;                                         //������ ���� ���� 1�� ����
	printf("%d ��° �Լ� ȣ��- %d�� �������� %d�Դϴ�.\n", num, num, num*num);  //�ش繮�� ���
}