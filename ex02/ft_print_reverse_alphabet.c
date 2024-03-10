#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}


void ft_print_reverse_alphabet(void)
{
    int alphabet = 122;
    while (alphabet >= 97)
    {
        ft_putchar(alphabet--);
    }
}

int main()
{
    ft_print_reverse_alphabet();
}