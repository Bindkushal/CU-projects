#include <stdio.h>

int string_length(char* given_string)
{

    int length = 0;
    while (*given_string != '\0') {
        length++;
        given_string++;
    }
    return length;
}

int main()
{

    char given_string[] = "GeeksforGeeks";
    printf("Length of the String: %d\n",
        string_length(given_string));
    return 0;
}
