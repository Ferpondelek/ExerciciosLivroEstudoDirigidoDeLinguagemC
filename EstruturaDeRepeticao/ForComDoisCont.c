#include <stdio.h>
#include <stdlib.h>

int main()
{

    for(int i = 1, b = 1; i+b <= 15; i+=2,b++)
    {
        printf("%d\n",i+b);
    }

    return 0;
}
