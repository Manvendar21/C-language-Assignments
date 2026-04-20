#include <stdio.h>
#include <string.h>
int main() {
    char str[100], rev[100], str2[100], sub[100];
    int i, len = 0, equal = 1, found = 0;
    scanf("%s", str);
    while(str[len] != '\0')
        len++;
    printf("%d\n", len);
    for(i = 0; i < len; i++)
        rev[i] = str[len - i - 1];
    rev[len] = '\0';
    printf("%s\n", rev);
    scanf("%s", str2);
    for(i = 0; str[i] != '\0' || str2[i] != '\0'; i++) {
        if(str[i] != str2[i]) {
            equal = 0;
            break;
        }
    }
    if(equal)
        printf("Equal\n");
    else
        printf("Not Equal\n");
    equal = 1;
    for(i = 0; i < len/2; i++) {
        if(str[i] != str[len - i - 1]) {
            equal = 0;
            break;
        }
    }
    if(equal)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    scanf("%s", sub);
    for(i = 0; str[i] != '\0'; i++) {
        int j = 0, k = i;
        while(sub[j] != '\0' && str[k] == sub[j]) {
            j++;
            k++;
        }
        if(sub[j] == '\0') {
            found = 1;
            break;
        }
    }
    if(found)
        printf("Substring found\n");
    else
        printf("Substring not found\n");
    return 0;
}