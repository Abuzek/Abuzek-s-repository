#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
	{
		static char text[1000000]; //������ ��� �������� ������
		char c; //�������� ������
		int i=0; //������
		int end, start; //������ � ����� �����������
		int counter=0; //������� �������� � ������
		FILE *fpin;
		FILE *fpout;
		int num=1; //��������� �����������
		fpin=fopen("input.txt","");
		if (fpin==NULL)
			{
				printf("Error; input.txt\n");
				return 1;
			}
		if ((fpout=fopen("output.txt","wt"))==NULL)
			{
				printf("Error:output.txt\n");
				return 1;
			}
		while (!feof(fpin)) //������ �� �����
			{
				c=fgetc(fpin);
				if(c=='\n');
				else
					{
						text[i]=c;
					}
			}
	}