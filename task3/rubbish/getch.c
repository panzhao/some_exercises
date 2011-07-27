#include <stdio.h>
#include <ctype.h>
#include "calculator.h"

#define BUFSIZE 100

char buf[BUFSIZE];
int  bufp = 0;

int getch(void)
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
    if (bufp >= BUFSIZE)
    {
        printf("error : over stack");
    }
    else
    {
        buf[bufp++] = c;
    }
}

int getop(char s[])
{
    int i = 0;
    int c = 0;

    while (s[0] = c = getch() == ' ' || c == '\t')
    {
        ;
    }

    s[1] = '\0';

    if (!isdigit(c) && c != '.')
    {
        return c;
    }	

    if (isdigit(c))
    {
        while (isdigit(s[++i] = c = getch()))
	{
	    ;
	}
    }

    if (c == '.')
    {
        while (isdigit(s[++i] = c = getch()))
	{
	    ;
	}
    }
    
    s[i] = '\0';

    if (c != EOF)
    {
        ungetch(c);
    }

    return NUMBER;

}

