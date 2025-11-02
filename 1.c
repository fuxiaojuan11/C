#include<stdio.h>
#include<stdlib.h>
void menu()
{
     printf("***************\n");
         printf("********1.play*****\n");
          printf("******0.stop*******\n");
           printf("***************\n");
}

void game()
{
    RAND_MAX;
    int ret = rand();
    printf("%d\n",ret);

}
int main()
{
    int input = 0;

    do
    {
        menu();
        printf("请选择:>");
        scanf("%d",&input);
        switch(input)
        {
        case 1:
            printf("猜数字\n");
            game();
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:   
            printf("选择错误，重新选择\n");
            break;

        }
    } while (input);
    

    return 0;

}