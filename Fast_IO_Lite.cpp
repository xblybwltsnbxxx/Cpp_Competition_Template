inline int gint()
{
    int t=0, tt = 1;
    char ch = getchar();
    if(ch=='-')
    {
        tt = -1;
        ch = getchar();
    }
    while(ch>='0'&&ch<='9')
    {
        t = t * 10 + ch - '0';
        ch = getchar();
    }
    return t * tt;
}

inline void pint(int a)
{
    if(a<0)
    {
        putchar('-');
        a = -a;
    }
    if(a==0)
    {
        putchar('0');
        return;
    }
    char ch[10];
    char *pch = ch;
    while(a)
    {
        *pch++ = a % 10 + '0';
        a /= 10;
    }
    while(pch>ch)
        putchar(*--pch);
}
