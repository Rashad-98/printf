#include "main.h"

/**
 * _pow - calculates the power of a number to another
 * @num: base number
 * @exp: exponent
 *
 * Return: result
 */
int _pow(int num, int exp)
{
	int i, num1;

	num1 = num;
	if (exp == 0)
	{
		return (1);
	}
	for (i = 0; i < (exp - 1); i++)
	{
		num = num * num1;
	}

	return (num);
}

/**
 * find - searches an array of characters for a character
 * @c: character to search for
 * @arr: array of characters
 * @size: array size
 *
 * Return: 1 if found, 0 otherwise
 */
int find(char c, char *arr, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (c == *(arr + i))
			return (1);
	}

	return (0);
}

/**
 * is_valid - checks the validity of format string tags
 * @format: pointer to first character after %
 * @i: index of last character (the conversion specifier)
 *
 * Return: 1 if valid, 0 otherwise
 */
int is_valid(const char *format, int i)
{
	int j, k;
	char flags[] = {'-', '+', ' ', '#', '0'};
	char length[] = {'l', 'L', 'h'};

	for (j = 0; j <= i; j++)
	{
		if (!find(*(format + j), flags, 5))
			break;
	}

	for (j = j; j <= i; j++)
	{
		if (!(*(format + j) >= '0' && *(format + j) <= '9'))
			break;
	}

	if (*(format + j) == '.')
	{
		j++;
	}

	for (j = j; j <= i; j++)
	{
		if (!(*(format + j) >= '0' && *(format + j) <= '9'))
			break;
	}

	k = j + 1;
	for (j = j; j <= k; j++)
	{
		if (!find(*(format + j), length, 3))
			break;
	}

	if (j == i)
	{
		return (1);
	}

	return (0);
}

/**
 * num_to_str - converts integer to character string
 * @num: number
 *
 * Return: pointer to character string
 */
char *num_to_str(int num)
{
	int i, j, chars, num1, num2;
	char *str;

	chars = 0;
	j = 0;

	if (num == 0)
		chars++;

	if (num < 0)
	{
		chars++;
		num2 = num;
		num = num * (-1);
	}

	num1 = num;

	for (i = 0; num > 0; i++)
	{
		num = num / 10;
		chars++;
	}

	str = malloc((chars * sizeof(char)) + 1);

	if (num2 < 0)
	{
		*str = '-';
		j = 1;
	}

	for (i = 0; i < (chars - j); i++)
	{
		*(str + i + j) = (char)((num1 / _pow(10, (chars - 1 - i - j))) + 48);
		num1 = num1 % (_pow(10, (chars - 1 - i - j)));
	}
	*(str + i + j) = '\0';

	return (str);
}
