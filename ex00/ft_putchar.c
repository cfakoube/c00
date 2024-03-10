#include <unistd.h>

void ft_putchar(char cedric)
{
    write(1, &cedric, 1);
}

int main()
{
    int chiffre = 65;
    char prenom = 'P';
    char nom[] = "abcde";
    nom[4] = '2';
    write(1, nom, 5);
    ft_putchar('\n');
    ft_putchar('d');
    ft_putchar(prenom);
    ft_putchar('\n');

    ft_putchar(67);
    ft_putchar(10);

}

