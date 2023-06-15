#include <unistd.h>

void printString(const char *str)
{
    size_t len = 0;
    
    // Calculate the length of the string
    while (str[len] != '\0') {
        len++;
    }
    
    // Use the write function to print the string
    write(1, str, len);
}

int main(void)
{
    

    printString("Simon Muchemi");
    return 0;
}
