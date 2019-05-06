#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n[] = { 10,9,8,7,6,5,4,3,2,1 };
    int num = sizeof(n) / sizeof(int);
    int i;

    for (i=0; i < num; i++)
    {
        printf("n[%d] = %d\n", i, n[i]);
    }
    return 0;
}
