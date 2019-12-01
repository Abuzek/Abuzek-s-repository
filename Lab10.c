#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
	{
		static char text[1000000]; //массив для хранения текста
		char c; //буферный символ
		int i=0; //индекс
		int end, start; //начало и конец предложения
		int counter=0; //счетчик символов в тексте
		FILE *fpin;
		FILE *fpout;
		int num=1; //нумерация предложений
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
		while (!feof(fpin)) //чтение из файла
			{
				c=fgetc(fpin);
				if(c=='\n');
				else
					{
						text[i]=c;
					}
			}
	}