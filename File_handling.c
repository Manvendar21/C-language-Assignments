#include <stdio.h>
int main() 
{
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("input.txt", "r");
    if(fp1 == NULL) {
        printf("Error: source.txt not found\n");
        return 1;
    }

    fp2 = fopen("output.txt", "w");
    if(fp2 == NULL) {
        printf("Error: could not create destination.txt\n");
        return 1;
    }

    while((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);
    printf("File copied successfully\n");
    return 0;
}