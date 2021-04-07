#if 1
#include <stdio.h>
#include <stdlib.h>
void init(int *score, int *n);
void input(int *score, int n);
void calc(int* score, int *total, int n);
void output( int *score, int total, int n);

int main()
{
    int n;
    int* score=0;
    int total = 0;

    init(&score, &n);
    input(score, n);
    calc(score,&total, n);
    output(score, total, n);
    free(score);
    return 0;
}

void init(int** score, int* n)
{
    printf("��� : ");
    scanf_s("%d", n);

    *score = (int*)malloc(*n * sizeof(int));
}
void input(int* score, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d��° ���� : ", i + 1);
        scanf_s("%d", &score[i]);
    }
}
void calc(int* score, int* total, int n)
{
    int i;
    for (i = 0; i < n; i++)
        *total += score[i];
}
void output(int* score, int total, int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%6d", score[i]);

    printf("\n");
    printf("���� : %d\n", total);
}
#endif


#if 0
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n;
    int *score;
    int total = 0;

    printf("��� : ");
    scanf_s("%d", &n);

    score = (int*)malloc(n*sizeof(int));

    for (i = 0; i < n; i++)
    {
        printf("%d��° ���� : ", i + 1);
        scanf_s("%d", &score[i]);
    }

    for (i = 0; i < n; i++)
        total += score[i];

    for (i = 0; i < n; i++)
        printf("%6d", score[i]);

    printf("\n");
    printf("���� : %d\n", total);
    free(score);
    return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
    int score[3] = { 0, };
    int i;
    int total = 0;

    for (i = 0; i < 3; i++)
    {
        printf("%d��° ���� : ", i+1);
        scanf_s("%d", &score[i]);
    }

    for (i = 0; i < 3; i++)
        total += score[i];

    for (i = 0; i < 3; i++)
        printf("%6d", score[i]);

    printf("\n");
    printf("���� : %d\n", total);
    
    return 0;
}
#endif



#if 0
#include <stdio.h>
int main()
{
    char* ptr;
    int size;
    printf("memory bytes >> ");
    scanf_s("%d", &size);
    if ((ptr = (char*)malloc(size)) == NULL)
    {        // �޸� �Ҵ�
        printf("�޸� �Ҵ翡 �����Ͽ����ϴ�.\n");
        exit(0);
    }
    getchar();
    printf("string >> ");
    gets(ptr);
    printf("%s\n", ptr);
    free(ptr);// �޸� ����
    return 0;
}
#endif


#if 0
#include <stdio.h>
void PrintCount();

int main()
{
    int i;
 //   count = 100;
    for (i = 0; i < 5; i++) {
        PrintCount();
    }
    return 0;
}

void PrintCount()
{
    static int  count = 0;
    count++;
    printf("% d��° ȣ��\n", count);
}

#endif


#if 0
#include <stdio.h>

void func(void);
int global;

int main()
{
    int a=10;
    printf("main() : a = %d\n", a);
    printf("main() : global = %d\n", global);
    func();
    return 0;
}

void func(void)
{
    int a = 1, b = 2;
    printf("func() : a = %d, b = %d\n", a, b);
    printf("func() : global = %d\n", global);
}
#endif


#if 0
#include <stdio.h>

void func(int a);
int a, b;  // ���� ���� ����

int main()
{
    a = 5;
    func(a);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}

void func(int a)
{
    b = 2;
    a += 2;
}


#endif

#if 0
#include <stdio.h>

int main()
{
    int  i;
    i = 5;
    {
        int  i;
        i = 3;
        printf("i=%d\n", i);
    }
    printf("i=%d\n", i);

    return 0;
}

#endif
#if 0

#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    printf("�ٲٱ� �� a: %d, b: %d\n", a, b);
    {
        int a = 10, b = 20;
        int temp;
        temp = a;
        a = b;
        b = temp;
    }
    printf("�ٲ� �� a: %d, b: %d\n", a, b);
    return 0;
}

#endif