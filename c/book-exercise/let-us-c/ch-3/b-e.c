#include <stdio.h>
int main()
{
    int i, t, d, s;
    for(i=1; i<=500; i++)
    {
        t=i;
        s=0;
        while(t>0)
        {
            d = t%10;
            s += (d*d*d);
            t /= 10;
        }
        if(i == s)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}