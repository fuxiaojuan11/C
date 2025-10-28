#include<stdio.h>
int main()
{
    int i = 1;
    int n = 0;
    
    int ret = 1;


    printf("请输入整数n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        ret = ret * i;
       

    }
    printf("%d\n",ret);
    
    return 0;
}