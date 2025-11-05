#include <stdio.h>

int main()
 {
    FILE *fp;
    char text[100];

    fp = fopen("sample.txt", "a");
    if (fp == NULL) 
    {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);
    fclose(fp);

    printf("File written successfully!");
    return 0;
}
