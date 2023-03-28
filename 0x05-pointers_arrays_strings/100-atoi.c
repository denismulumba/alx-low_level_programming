/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string, or 0 if no valid number is found
 */
int _atoi(char *s)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    while (s[i] != '\0') {
        if (s[i] == '-') {
            sign *= -1;
        }
        else if (s[i] >= '0' && s[i] <= '9') {
            result = result * 10 + (s[i] - '0');
            while (s[i + 1] >= '0' && s[i + 1] <= '9') {
                i++;
                result = result * 10 + (s[i] - '0');
            }
            return result * sign;
        }
        i++;
    }

    return 0;
}
