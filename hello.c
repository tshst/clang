#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Hello, World!\n");
    printf("日本語でも大丈夫\n");
    printf("こんにちは。私の名前は%sです。\n年齢は%dです。\n","高岡", 20);
    printf("%d / %d = %d 余り %d\n", 5, 2, 5/2, 5%2);

    int i1, i2, j1, j2;
    double d1, d2, e1, e2;

    j1 = 3;
    j2 = 3;

    d1 = 1.23;
    d2 = 1.23;

    i1 = d1;
    i2 = (int)d2;

    e1 = j1;
    e2 = j2;

    printf("i1 = %d i2 = %d\n", i1, i2);
    printf("e1 = %f e2 = %f\n", e1, e2);

    int a;
    printf("数値を入力してください。: ");
    scanf("%d", &a);

    if (a > 0)
    {
        printf("入力した値は、正の数です。\n");
    }

    return 0;
}
