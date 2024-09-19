#include <unistd.h>

void ft_print_comb(void)

{
    char a;
    char b;
    char c;

    for (a = '0';  a<= '7'; a++)
    {
        for (b = a + 1; b <= '8'; b++)
        {
            for (c = b + 1; c <= '9'; c++)
            {
                write(1, &a, 1);
                write(1, &b, 1);
                write(1, &c, 1);

                if (a != '7' || b != '8' || c != '9')
                {
                    write(1, ", ", 2);
                }
            }
        }
    }
}