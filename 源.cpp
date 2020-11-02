#include <stdio.h> 
int main()
{
    int N, M, j;
    scanf_s("%d", &N);   //输入行数N的值
    for (j = 0; j < N; j++)    //循环N行
    {
        scanf_s("%d", &M);    //输入每行的数字个数M
        int sum = 0, a[1000], i;     //定义数组a
        for (i = 1; i <= M; i++)
            scanf_s("%d", &a[i]);  //输入要相加的数字
        for (i = 1; i <= M; i++)      //把输入的数字相加
            sum = sum + a[i];
        printf("%d\n", sum);    //输出和sum
        if (j != N - 1)printf("\n");
    }
    return 0;
}
