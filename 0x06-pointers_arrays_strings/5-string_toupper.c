/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: pointer to string
 *
 * Return: pointer to resulting string
 */
char *string_toupper(char *str)
{
    char *p = str;

    while (*p)
    {
        if (*p >= 'a' && *p <= 'z')
        {
            *p -= 32; /* ASCII difference between upper and lower case */
        }
        p++;
    }

    return str;
}
