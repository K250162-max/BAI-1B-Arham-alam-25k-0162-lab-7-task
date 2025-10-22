#include <stdio.h>

int main() {
    char str[100];

    printf("Enter characters (except alphabets will be stored): ");
    scanf("%[^A-Za-z]", str); 

    printf("You entered these non-alphabet characters: %s\n", str);

    return 0;
}

