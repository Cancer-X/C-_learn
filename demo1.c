


#include <stdio.h>

int main(void)
{
    int ar[] = {1, 2, 3, 4};
    int *p = (void *)((char *)&ar + 1);

    /*
        0x00 00 00 01
        0x00 00 00 02
        
          
    */

    printf("%#x\n", *p);

    return 0;
}