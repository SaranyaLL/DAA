#include <stdio.h>
int main() {
    char s[] = "Good Morning";
    int i;

    for (i = 0; s[i] != '\0'; ++i);
    
    printf("Length of the string: %d", i);
    return 0;
}
OUTPUT:
Length of the string: 12
