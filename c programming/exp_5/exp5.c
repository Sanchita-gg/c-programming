#include <stdio.h>
#include <string.h>

void REVERSE(char str[]) 
{
    int length, start, end;
    char temp; 

    length = strlen(str);
    start = 0;
    end = length - 1;

    while (start < end) 
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        
        start++;
        end--;
    }
}

int main() 
{
    char str[100];

    printf("enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    REVERSE(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
