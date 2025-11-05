#include <stdio.h>

int main() 
{
    FILE *fp;
    char line[200];

    fp = fopen("sample.txt", "r");

    if (fp == NULL) 
    {
        printf("Could not open the file.\n");
        return 1;
    }

    printf("File content:\n");
    while (fgets(line, sizeof(line), fp) != NULL) 
    {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}
