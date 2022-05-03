#include <stdio.h>

int main(void)
{
    FILE *file = fopen("test.txt", "r");
    if (file!= NULL)
    {
        char c;
        while (fread(&c, sizeof(char), 1, file))
        {
            printf("%c", c);
        }
        fclose(file);
    }
}