#include <unistd.h>
#include <stdlib.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * _putint - prints out an integer
 * @num: number to be printed
 * Return: number of characters printed
 */
int _putint(int num)
{
    int count = 0;
    int temp = num;

    /* Count the number of digits in the integer */
    if (num == 0) {
        count = 1;
    } else {
        while (temp != 0) {
            count++;
            temp /= 10;
        }
    }

    /* Create a character array to store the digits */
    char digits[count];

    /* Extract the digits from the integer and store them in the array */
    if (num == 0) {
        digits[0] = '0';
    } else {
        int i = count - 1;
        while (num != 0) {
            digits[i] = (num % 10) + '0';
            num /= 10;
            i--;
        }
    }

    /* Write the digits to the standard output */
    return write(1, digits, count);
}

/**
 * _put_str - prints out a string
 * @str: string to be printed
 * Return: nothing
 */
void _put_str(const char *str)
{
    size_t len = 0;

    // Calculate the length of the string
    while (str[len] != '\0') {
        len++;
    }

    // Use the write function to print the string
    write(1, str, len);
}

/**
 * _isdigit - checks if a character is a digit
 * @c: character to check
 * Return: 1 if it is a digit, 0 otherwise
 */
int _isdigit(int c)
{
    if (c >= '0' && c <= '9') {
        return 1;
    } else {
        return 0;
    }
}

/**
 * main - multiplies two positive numbers
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 * Return: 0 on success
 */
int main(int argc, char const *argv[])
{
    int a, b, mul;

    if (argc != 3) {
        _put_str("Error\n");
        exit(98);
    }

    a = atoi(argv[1]);
    b = atoi(argv[2]);

    if (_isdigit(a) == 0 || _isdigit(b) == 0) {
        _put_str("Error\n");
        exit(98);
    }

    if (a < 0 || b < 0) {
        _put_str("Error\n");
        exit(98);
    }

    mul = a * b;

    _putint(mul);
    _putchar('\n');

    return 0;
}
