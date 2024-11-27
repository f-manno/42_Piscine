#include <unistd.h> // Include per la funzione write

int ft_strlen(const char *str);
void ft_strcat(char *dest, const char *src);

int main(void)
{
    char dest[30] = "Prova di testo"; // Dobbiamo garantire che la dimensione di dest sia sufficiente
    char src[] = " Interessante";

    ft_strcat(dest, src);
    write(1, "Stringa concatenata: ", 21);
    write(1, dest, ft_strlen(dest));
    write(1, "\n", 1);

    return 0;
}

int ft_strlen(const char *str)
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

void ft_strcat(char *dest, const char *src)
{
    int dest_len = ft_strlen(dest);
    int src_len = ft_strlen(src);

    // Concatenare i contenuti di src in dest
    for (int i = 0; i <= src_len; i++)
    {
        dest[dest_len + i] = src[i];
    }
}
