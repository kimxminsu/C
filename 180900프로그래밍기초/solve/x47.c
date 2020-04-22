#include <stdio.h>
#include <string.h>

int main(void) {
    char str[200];
    int n;

    printf("Input str: ");
    scanf("%s", str);
    printf("Input N: ");
    scanf("%d", &n);

    int i;
    for (i = 0; i < strlen(str); i++)
        str[i] = str[i] + n;

    printf("Password is: %s\n\n", str);

    return 0;
}
