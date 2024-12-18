    #include <stdlib.h>
    #include <stdio.h>
    // #include <unistd.h>

    int nbr_lng(long int nb)
    {
        int i;

        i = 1;
        while(i < nb)
        {
            nb = nb/10;
            i++;
        }
        return (i);
    }

    char    ft_putnbr(long int nb)
    {
        while (nb > 9)
        {
            nb = nb / 10;
        }
        if (nb < 10)
            return(nb + '0');
        return(0);
    }

    int power(long int nb, int pow)
    {
        int i;
        int tmp;

        tmp = nb;
        i = 0;
        while (i < pow)
        {
            nb = nb * tmp;
            i++;
        }
        return (nb);
    }

    char    *ft_itoa(int nbr)
    {
        int len;
        int ltz;
        char *ptr;
        int i;
        int temp;
        long int nb;

        ltz = 0;
        i = 0;
        nb = nbr;
        if (nb < 0)
        {
            nb *= -1;
            ltz = 1;
        }
        len = nbr_lng(nb);
        if(ltz)
            ptr = (char * )malloc(sizeof(char) * (len + 2));
        else
            ptr = (char * )malloc(sizeof(char) * (len + 1));
        if(!ptr)
            return (0);
        if(ltz)
        {
            ptr[i] = '-';
            i++;
            ptr[len + 2] = '\0';

             while (i <= len)
            {
                ptr[i] = ft_putnbr(nb);
                temp = power(10,(len - i - 1));
                nb = nb % temp;
                i++;
            }
        }
        else
        {
            ptr[len + 1] = '\0';
                
            while (i < len)
            {
                ptr[i] = ft_putnbr(nb);
                temp = power(10,(len - i- 2));
                nb = nb % temp;
                i++;
            }
        }

        return (ptr);
    }
    int main(int argc,char *argv[])
    {
        int lb;

        lb = -98;
        (void)argc;
        (void)argv;
        printf("wynik = %s\n",ft_itoa(lb));
        //str_prt(ft_itoa(lb));
        return (0);
    }