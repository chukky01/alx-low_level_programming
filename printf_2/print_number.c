#include "main.h"

/**
 *print_number - prints an integer
 *@buf: current buffer
 *@n: number to be printed
 *@bp: current char count
 *Return: void
 */

void print_number(char buf[], int n, int *bp)
{
int quo;
int i;
int p;
i = 0;
quo = n;
if (n < 0)
{
strapd(buf, '-', bp);
n = 0 - n;
print_number(buf, n, bp);
return;
}
if (quo >= 10)
{
while (quo >= 10)
{
quo = quo / 10;
i++;
}
strapd(buf, (quo + '0'), bp);
p = _pow10(i);
n = (n - (quo *p));
<<<<<<< HEAD
add_zeros(buf, n, p, bp);
=======
add_zeros(buf, n, p);
}
>>>>>>> 8154364b0c0f967330706e3c921eb4bd80c548cb
if (n >= 10)
print_number(buf, n, bp);
else
{
strapd(buf, (n + '0'), bp);
return;
}
}

/**
 *_pow10 - calculates the value of 10 raised to an integer
 *@n: value of power
 *Return: void
 */
int _pow10(int n)
{
int i;
int tmp;
if (n == 0)
return (0);
tmp = 10;
for (i = 1; i < n; i++)
tmp *= 10;
return (tmp);
}

/**
 *add_zeros - adds appropratite amount of zeros before digits
 *@buf: current buffer
 *@n: integer that zeros should be added before
 *@p: Power of MSD of initial integer
 *@bp: current char count
 *Return: void
 */
void add_zeros(char buf[], int n, int p, int *bp)
{
int i;
for (i = p / 10; i > 1 && n < i; i = i / 10)
strapd(buf, 0 + '0', bp);
return;
}

/**
 *print_usigned_number - prints an unsigned int
 *@buf: current buffer
 *@n: unsigned int
 *@bp: current char count
 *Return: no of chars printed
 */
void print_usigned_number(char buf[], unsigned int n, int *bp)
{
unsigned int quo;
int i;
int p;
i = 0;
quo = n;
while (quo >= 10)
{
quo = quo / 10;
i++;
}
strapd(buf, (quo + '0'), bp);
p = _pow10(i);
n = (n - (quo *p));
add_zeros(buf, n, p, bp);
if (n >= 10)
print_usigned_number(buf, n, bp);
else
{
strapd(buf, (n + '0'), bp);
return;
}
}
