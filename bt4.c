#include <stdio.h>
#include <string.h>

void reverse(char str[], int start, int end) {
    if (start >= end) {
        return;
    }
    
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    reverse(str, start + 1, end - 1);
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    int length = strlen(str);
    reverse(str, 0, length - 1);
    printf("%s", str);

}