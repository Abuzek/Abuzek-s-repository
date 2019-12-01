#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#define LEN 1000
#define NUM_OF_STRINGS 256
struct SRT
	{
		int lenght; //Длинна строки
		char *adr; //Адресс строки
	};
int main()
	{
		setlocale (LC_ALL,"Russian");
		struct SRT lines[NUM_OF_STRINGS]; //массив структур
		struct SRT tmp;  //временная структура
		int i;
		int j;
		int n; //счетчик строк
		char str[NUM_OF_STRINGS][LEN]; //буфер текста
		char *ptr;
		int counter;
		//начальные определения переменных и чтение из файла
		i=0;
		j=0;
		n=0;
		counter=0;
		FILE *fpin;
		fpin=fopen("input.txt","r");
		if (fpin==NULL) //проверка корректности открытия файла
			return 1;
		while (ptr=fgets(str[i], sizeof(str[i]),fpin)) //анализ строк в файле
			{
				sscanf(str[i],"%[^\n]", str[i]);
				while (*ptr)
				*ptr!='\0'
				{
					counter++;
					ptr++;
				}
			n++; 
			// считаем количество строк в файле
				// запись информации в соответсвующие поля структуры
				lines[i].adr = str[i];
				lines[i].lenght = counter;
				//выводим статистику по длине строк
				printf("In string %d symbols %d\n",i, lines [i++].length);
				counter=0;
			}
		for (i=0; i<n-1;i++) //сортировка массива структур по длине строк файла методом "пузырька"
			for (j=i+1;j<n;j++)
				{
					if (lines[i].length>lines[j].length)
					{
						tmp=lines[i];
						lines[i]=lines[j];
						lines[j]=tmp;
					}
				}
		printf("\n");
		//вывод строк в порядке возрастания их длин 
		for (i=0;i<n;i++)
			{
				puts(lines[i].adr);
			}
		fclose(fpin);
		return 0;
}