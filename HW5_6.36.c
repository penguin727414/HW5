#include <stdio.h>

void stringReverse(const char *str) {
    if (*str == '\0') {
        return; 
    }
    stringReverse(str + 1); 
    putchar(*str);          
}

int main() {
    char input[100]; 
    
    printf("請輸入字串: ");
    fgets(input, sizeof(input), stdin); 
    
    int i = 0;
    while (input[i] != '\0') {
        if (input[i] == '\n') {
            input[i] = '\0';
            break;
        }
        i++;
    }

    printf("倒序輸出: ");
    stringReverse(input);
    printf("\n");

    return 0;
}
