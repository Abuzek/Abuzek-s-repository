#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#define LEN 1000
#define NUM_OF_STRINGS 256
struct SRT
	{
		int lenght; //������ ������
		char *adr; //������ ������
	};
int main()
	{
		setlocale (LC_ALL,"Russian");
		struct SRT lines[NUM_OF_STRINGS]; //������ ��������
		struct SRT tmp;  //��������� ���������
	}