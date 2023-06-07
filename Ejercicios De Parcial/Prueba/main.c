#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *p; char c; char s[10];

    *(&c) = 'a';
    free(*p);
    scanf("%c",c);
    p[0]= *(s+0);
    c = "z";
    p = &s;
    p = s+5;
    p = &c;


    return 0;
}
