void _puts_recursion(char *s)
{
    int i = 0;

    if((s[i]) == '\0')
    {
        putchar('\n');
    }
    else
    {
        putchar(s[i]);
        _puts_recursion(s[i + 1]);

    }
}
