#include <stdio.h>

int main()
{
    FILE *source, *destination;
    int ch;

    source = fopen("source.txt", "r");
    destination = fopen("destination.txt", "w");

    if (source == NULL || destination == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    printf("File contents copied successfully.\n");

    fclose(source);
    fclose(destination);

    return 0;
}