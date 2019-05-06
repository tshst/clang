#include <stdio.h>

int test()
{
    int x;

    //逐次実行
    printf("Hello\n");
    printf("world!");
    x = 1;

    //分岐
    if (x == 1)
    {
        x = x + 5;
        printf("answar is %d\n", x);
    }
    else
    {
        printf("answer is nothing \n");
    }
    
    //while loop
    while (x > 0)
    {
        x = x - 1;
        printf("answer is %d \n",x);
    }
    
    
}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}
