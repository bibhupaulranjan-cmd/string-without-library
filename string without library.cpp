#include <stdio.h>

int main() {
    char str1[100], str2[100], str3[100];
    int i, j, length = 0, flag = 0;

    printf("Enter the first string: ");
    gets(str1);  // For simplicity; use fgets() in safe programs

    // 1?? Find length of string (without strlen)
    for (i = 0; str1[i] != '\0'; i++) {
        length++;
    }
    printf("\nLength of the string: %d", length);

    // 2?? Copy one string to another (without strcpy)
    for (i = 0; str1[i] != '\0'; i++) {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
    printf("\nCopied string: %s", str2);
    for (i = length - 1, j = 0; i >= 0; i--, j++) {
        str3[j] = str1[i];
    }
    str3[j] = '\0';
    printf("\nReversed (complemented) string: %s", str3);
    printf("\n\nEnter another string to compare: ");
    gets(str2);

    flag = 0;
    for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Strings are equal.\n");
    else if (str1[i] > str2[i])
        printf("First string is greater.\n");
    else
        printf("Second string is greater.\n");

    return 0;
}

