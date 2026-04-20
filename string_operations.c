#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100], temp;
    int choice, i, len;
    while(1) {
        printf("\n1.Length\n2.Copy\n3.Concatenate\n4.Compare\n5.Reverse\n6.Exit\n");
        scanf("%d", &choice);
        if(choice == 6)
            break;
        printf("Enter first string: ");
        scanf("%s", str1);
        switch(choice) {
            case 1:
               printf("%d\n", (int)strlen(str1));
                break;
            case 2:
                printf("Enter second string: ");
                scanf("%s", str2);
                strcpy(str2, str1);
                printf("%s\n", str2);
                break;
            case 3:
                printf("Enter second string: ");
                scanf("%s", str2);
                strcat(str1, str2);
                printf("%s\n", str1);
                break;
            case 4:
                printf("Enter second string: ");
                scanf("%s", str2);
                if(strcmp(str1, str2) == 0)
                    printf("Equal\n");
                else
                    printf("Not Equal\n");
                break;
            case 5:
                len = strlen(str1);
                for(i = 0; i < len/2; i++) {
                    temp = str1[i];
                    str1[i] = str1[len - i - 1];
                    str1[len - i - 1] = temp;
                }
                printf("%s\n", str1);
                break;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
