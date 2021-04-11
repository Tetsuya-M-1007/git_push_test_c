#include <stdio.h>
#include <math.h> 

int square(int); // プロトタイプ宣言
int cube(int); // プロトタイプ宣言

int main(void)
{
    // ### point ###
    printf("\n");
    printf("### point ###\n");
    printf("\n");

    int *a1, i1;
    int *a2, i2;
    int *a3, i3;
    a1 = &i1;
    a2 = &i2;
    a3 = &i3;
    *a1 = 1;
    *a2 = 2;
    *a3 = 3;
    printf("a1 = %p\n", a1);
    printf("a2 = %p\n", a2);
    printf("a3 = %p\n", a3);
    printf("*a1 = %d\n", *a1);
    printf("*a2 = %d\n", *a2);
    printf("*a3 = %d\n", *a3);
    printf("i1 = %d\n", i1);
    printf("i2 = %d\n", i2);
    printf("i3 = %d\n", i3);

    // ### for ###
    int input_num;   

    printf("\n"); 
    setvbuf(stdout, NULL, _IONBF, 0);
    printf("Input number of array:");
    scanf("%d", &input_num);
    printf("\n");
    printf("### for ###\n");
    printf("\n");

    int array[input_num];

    for(int i = 1; i <= input_num; i++)
    {
        if(i % 2 == 0)
        {
            array[i] = square(i);
        }
        else
        {
            array[i] = cube(i);
        }
    }

    for(int j = 1; j <= input_num; j++)
    {
        printf("array[%d] = %d\n", j, array[j]);
    }

    // ### while ###
    printf("\n");
    printf("### while ###\n");
    printf("\n");
    
    int k = 1;
    while(k <= input_num)
    {
        if(k % 5 == 0)
        {
            if(k % 3 == 0)
            {
                printf("FizzBuzz\n");
            }
            else
            {
                printf("Fizz\n");
            }
        }
        else if(k % 3 == 0)
        {
            printf("Buzz\n");
        }
        else
        {
            printf("No.%d\n", k);
        }
        k++;
    }

    printf("\n");
    printf("### do-while ###\n");
    printf("\n");

    int x = 1;

    do
    {
        switch(x)
        {
            case 1:
                printf("First\n");
                break;

            case 2:
                printf("Second\n");
                break;

            case 3:
                printf("Third\n");
                break;

            case 4:
                printf("Fourth\n");
                break;

            case 5:
                printf("Fifth\n");
                break;

            default:
                printf("Id.%d\n", x);
                break;
        }
        x++;
    }while(x <= input_num);
}

int square(int num_s)
{
    return pow(num_s, 2);
    return 0;
}

int cube(int num_c)
{
    return pow(num_c, 3);
    return 0;
}