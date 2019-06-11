#include <stdio.h>

//グローバル変数
int global = 10;

//プロトタイプ宣言
void func1(double, double);
void func2();

//main関数

int main(int argc, char const *argv[])
{
    double a = 123.41;
    int b = 10;
    printf("main処理中\n");
    printf("global=%d\n", global);
    printf("a=%f, b=%d\n", a,b);
    printf("***********************\n");
    //func1を呼び出し
    func1(3.1,4);
    //func2を呼び出し
    func2();
    return 0;
}

void func1(double a, double b)
{
    global = 5;
    printf("func1処理中\n");
    printf("global=%d\n", global);
    printf("a=%f, b=%d\n", a, b);
    printf("***********************\n");
}

void func2()
{
    double a = 4.1;
    int b = 2;
    printf("func2処理中\n");
    printf("global=%d\n",global);
    printf("a=%f, b=%d\n", a, b);
    printf("***********************\n");
}