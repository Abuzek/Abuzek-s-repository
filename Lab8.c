#include <stdio.h>

void reverse_data(char data[], char* start, char* end) {
    while (start < end) {
        char ch = *start;
        *start = *end;
        *end = ch;
        start++;
        end--;
    }
}

void process_data(char data[]) { //������� 
    char* word_start = NULL; //��������� ������ �����
    char* ptr = data; // ������ ������� ������� ������
    do
    {
        int is_separator = (*ptr == '.') || (*ptr == ',') || //�����������
            (*ptr == ' ') || (*ptr == '\n');

        if (!is_separator && (word_start == NULL)) { // ���� �� ����������� � ������ �����
            word_start = ptr; 
        }
        else if (is_separator && (word_start != NULL)) { // �������� �����
            reverse_data(data, word_start, ptr - 1);
            word_start = NULL;
        }
    } while (*ptr++); // ���� �� ���������� �������� � ������� ��� �� ���������� ��� ������
    if (word_start != NULL) {
        reverse_data(data, word_start, ptr - 2);
    }

    reverse_data(data, data, ptr - 2);
}

int main() {
    char data[100];
    gets(data);
    process_data(data);
    printf("%s\n", data);
	getchar();
    return 0;
}