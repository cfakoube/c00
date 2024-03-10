#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_numbers(void)
{
    int start = 49;
    while (start <= 57)
    {
        ft_putchar(start++);
    }
}

int main()
{
    ft_print_numbers();
}
