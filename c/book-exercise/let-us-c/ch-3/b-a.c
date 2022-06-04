#include <stdio.h>
int main()
{
    int hours, i, oh, overtime;
    printf("Enter hours worked by 10 employees below:\n");
    for (i = 1; i <= 10; i++)
    {
        scanf("%d", &hours); 
        oh = hours - 40;
        if(oh > 0)
        {
            overtime = oh * 12;
        }
    }
    printf("%d", overtime);
    return 0;
}