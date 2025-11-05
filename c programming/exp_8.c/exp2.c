#include <stdio.h>

int main() 
{
    FILE *fp;
    char ch;

    fp = fopen("sample.txt", "r");

    if (fp == NULL) 
    {
        printf("Could not open the file.\n");
        return 1;
    }

    printf("File content:\n");
    while ((ch = fgetc(fp)) != EOF) 
    {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}
