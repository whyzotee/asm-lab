#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=-1;
    while (i<0)
    {
        i=i-1;
        if (i>0)
        {
            printf("i was %10d before\n", i+1);
            printf("i  is %10d now\n", i);
            break;
        }
    }

    return 0;
}
