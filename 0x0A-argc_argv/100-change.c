#include "main.h"
/**
 * calculate_min_coins(int cents) - calculate the minimum
 *  number of coins to make change for an 
 *  amount of money
 * @cents: The amount of money
 * Return: minimum number of coins
*/
int calculate_min_coins(int cents)
{
    if (cents < 0) {
        return 0;
    }

    int coins[] = {25, 10, 5, 2, 1};
    int numCoins = sizeof(coins) / sizeof(coins[0]);
    int count = 0;

    for (int i = 0; i < numCoins; i++) {
        count += cents / coins[i];
        cents %= coins[i];
    }

    return count;
}
/**main - prints the minimum number of coins to make 
 * change for an amount of money.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success.
 * */
int main (int argc, char *argv[])
{
    int count;

    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }
    if (atoi(argv[1]) < 0)
    {
        printf("%d\n", 0);
    }
    else
    {
        count = atoi(argv[1]);
        count = calculate_min_coins(count);
        printf("%d\n", count);
    }
}