/*
 * main - Prints all possible combinations of two two-digit numbers
 *
 * Description: The numbers should range from 0 to 99, and each combination
 * should be printed with a space between the two numbers and a comma and a space
 * between each combination. All numbers should be printed with two digits, and
 * 1 should be printed as 01. 00 01 and 01 00 are considered as the same combination
 * of the numbers 0 and 1. The program can only use the putchar function, and at
 * most eight times. No variables of type char are allowed.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    int i, j;

    for (i = 0; i < 100; i++)
    {
        for (j = i; j < 100; j++)
        {
            if (i == j)
            {
                continue;
            }

            putchar(i / 10 + '0');
            putchar(i % 10 + '0');
            putchar(' ');
            putchar(j / 10 + '0');
            putchar(j % 10 + '0');

            if (i != 98 || j != 99)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }

    return (0);
}

