/* #include <unistd.h>

void ft_print_alphabet(void)
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    write(1, alphabet, 26);
}

int main()
{
    ft_print_alphabet();
} */




void ft_putchar(char c)
{
    write(1, &c, 1);
}
/*
void ft_print_alphabet(void)
{
    int alphabet = 97;

    while (alphabet <= 122)
    {
        ft_putchar(alphabet);
        alphabet = alphabet + 1;
        if (alphabet == 123)
        {
            printf("\nAlphabet termine.\n");
        }
    }

} */

void ft_print_alphabet(void)
{
    char *alphabet = "abcdef";
    int i = -1;

    while (alphabet[++i])
    {
        ft_putchar(alphabet[i]);
    }
}

int main()
{
    ft_print_alphabet();
}






