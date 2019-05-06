#include <stdio.h>

int main(int argc, char const *argv[])
{
    double d[3];
    double sum, avg;
    int i = 0;

    d[0] = 1.2;
    d[1] = 3.7;
    d[2] = 4.1;

    sum = 0.0;
    int num = sizeof(d) / sizeof(double);
    printf("sizeof(d)の値は、%dです。\n", sizeof(d));
    printf("sizeof(double)の値は、%dです。\n", sizeof(double));
    printf("配列の要素数は、%dです。\n", num);
    
    /*
    for (i=0; i < num; i++)
    {
        sum += d[i];
    }
    */

    while (i < num)
    {
        sum += d[i];
        //i += 1;
        i++;
    }

    avg = sum / num;

    printf("合計値： %f\n", sum);
    printf("平均値： %f\n", avg);

    return 0;
}
