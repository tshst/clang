#include <stdio.h>


double average(double l, double m)
{
    double r = (l + m) / 2.0;
    return r;
}

//配列はポインタとして受け取る
double arr_ave(double *a, int num)
{
    int i;
    double ans = 0;
    
    for (i = 0; i < num; i++)
    {
        //ポインタの中身にansを足す
        ans += *a;
        //ポインタの位置を１つずらす
        a++;
    }

    return ans / num;
}

int main(int argc, char const *argv[])
{
    double d1, d2, d3;
    double a = 1.2, b = 3.4, c = 2.7;
    double r[] = { 1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0 };
    double ans;
    //arr_ave関数の中でsizeofするよりも、関数の引数として配列の要素数を渡したほうが簡単だった
    int num = sizeof(r) / sizeof(double);
    //double arr[] = { 1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0 };

    d1 = average(a, b);
    d2 = average(4.1, 5.7);
    d3 = average(c, 2.8);
    //printf("d1 = %f, d2 = %f, d3 = %f arr = %d\n", d1, d2, d3, arr[4]);
    printf("d1 = %f, d2 = %f, d3 = %f arr = %f\n", d1, d2, d3, r[1]);
    //ans = arr_ave(r, num);

    //printf("配列の合計の平均は、%dです。\n", arr_ave(arr));
    printf("配列の合計の平均は、%fです。\n", arr_ave(r, num));
    return 0;
}
