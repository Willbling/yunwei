#include <stdio.h> 
int main()
{
    int N, M, j;
    scanf_s("%d", &N);   //��������N��ֵ
    for (j = 0; j < N; j++)    //ѭ��N��
    {
        scanf_s("%d", &M);    //����ÿ�е����ָ���M
        int sum = 0, a[1000], i;     //��������a
        for (i = 1; i <= M; i++)
            scanf_s("%d", &a[i]);  //����Ҫ��ӵ�����
        for (i = 1; i <= M; i++)      //��������������
            sum = sum + a[i];
        printf("%d\n", sum);    //�����sum
        if (j != N - 1)printf("\n");
    }
    return 0;
}
