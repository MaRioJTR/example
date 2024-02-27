#include <stdio.h>

int main() {
    char Char;

    printf("Input any char : ");
    scanf_s("%c", &Char);

    if ((Char >= 'a' && Char <= 'z') || (Char >= 'A' && Char <= 'Z'))
        printf("This is an alphabet.\n");
    else if ((Char >= '0' && Char <= '9') || (Char == '-'))
        printf("This is a digit.\n");
    else
        printf("This is a special character.\n");

    return 0;
}
