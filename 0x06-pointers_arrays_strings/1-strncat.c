#include "main.h"

/**

 * _strncat - concatenate two strings

 * using at most n bytes from src

 * @dest: input value

 * @src: input value

 * @n: input value

 *

 * Return: dest

 */

char *_strncat(char *dest, char *src, int n)

{

        int l;

        int l;


        i = 0;

        while (dest[i] != '\0')

        {
                i++;

        }

         l = 0;

        while (l < n && src[l] != '\0')

        {

        dest[i] = src[l];

        l++;

        l++;

        }

        dest[i] = '\0';

        return (dest);

}
