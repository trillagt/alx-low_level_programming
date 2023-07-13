#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check if the string contains only digits
 * @str: the string to check
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int check_num(char *str)
{
    unsigned int count = 0;

    while (count < strlen(str)) /* count the string */
    {
        if (!isdigit(str[count])) /* check if str contains a non-digit character */
        {
            return 0;
        }
        count++;
    }

    return 1;
}

/**
 * main - Print the sum of the program's arguments
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
    int count;
    int str_to_int;
    int sum = 0;

    count = 1;
    while (count < argc) /* go through the whole array */
    {
        if (check_num(argv[count]))
        {
            str_to_int = atoi(argv[count]); /* ATOI --> convert string to int */
            sum += str_to_int;
        }
        else
        {
            printf("Error\n"); /* condition if one of the numbers contains non-digit symbols */
            return 1;
        }
        count++;
    }

    printf("%d\n", sum); /* print the sum */
    return 0;
}
