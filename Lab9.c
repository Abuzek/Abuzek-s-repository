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
		int i;
		int j;
		int n; //������� �����
		char str[NUM_OF_STRINGS][LEN]; //����� ������
		char *ptr;
		int counter;
		//��������� ����������� ���������� � ������ �� �����
		i=0;
		j=0;
		n=0;
		counter=0;
		FILE *fpin;
		fpin=fopen("input.txt","r");
		if (fpin==NULL) //�������� ������������ �������� �����
			return 1;
		while (ptr=fgets(str[i], sizeof(str[i]),fpin)) //������ ����� � �����
			{
				sscanf(str[i],"%[^\n]", str[i]);
				while (*ptr)
				*ptr!='\0'
				{
					counter++;
					ptr++;
				}
			n++; 
			// ������� ���������� ����� � �����
				// ������ ���������� � �������������� ���� ���������
				lines[i].adr = str[i];
				lines[i].lenght = counter;
				//������� ���������� �� ����� �����
				printf("In string %d symbols %d\n",i, lines [i++].length);
				counter=0;
			}
		for (i=0; i<n-1;i++) //���������� ������� �������� �� ����� ����� ����� ������� "��������"
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
		//����� ����� � ������� ����������� �� ���� 
		for (i=0;i<n;i++)
			{
				puts(lines[i].adr);
			}
		fclose(fpin);
		return 0;
}