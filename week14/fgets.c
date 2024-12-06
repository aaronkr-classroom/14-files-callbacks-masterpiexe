#include<stdio.h>

int main()
{
    char temp[100];  // Declare a character array (string) to hold the file contents.

    // Open the file "long.txt" in read text mode ("rt").
    FILE* p_file = fopen("long.txt", "rt");

    // Check if the file was successfully opened.
    if (NULL != fgets(temp, sizeof(temp), p_file))
    {
        // If fgets successfully reads the first line, it will print it.
        printf("%s", temp);
    }

    // Close the file after use.
    fclose(p_file);
}
