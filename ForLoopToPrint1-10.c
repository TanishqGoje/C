#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{

    for (int i = 1; i <= 10; i++)
    {
        if (i == 6)
        {
            continue;
        }

        printf("%d\n", i);
    }

    return 0;
}
//"continue" skips the thingy... idk