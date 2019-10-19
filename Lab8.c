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

void process_data(char data[]) { //функция 
    char* word_start = NULL; //указатель начала слова
    char* ptr = data; // хранит текущий элемент строки
    do
    {
        int is_separator = (*ptr == '.') || (*ptr == ',') || //разделитель
            (*ptr == ' ') || (*ptr == '\n');

        if (!is_separator && (word_start == NULL)) { // если не разделитель и начало слова
            word_start = ptr; 
        }
        else if (is_separator && (word_start != NULL)) { // зеркалит слово
            reverse_data(data, word_start, ptr - 1);
            word_start = NULL;
        }
    } while (*ptr++); // пока не закончатся элементы в массиве или не закончится сам массив
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