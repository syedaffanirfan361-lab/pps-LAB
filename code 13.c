#include <stdio.h>
int main()
{
    const int userName =123;
    const int passWd =123;
    int userName_ip, passWd_ip;
    printf("enter userName & passWord\n");
    scanf("%d%d", &userName_ip, &passWd_ip);
    if(userName ==userName_ip && passWd == passWd_ip)
    {
        printf("user is authoriszed");
    }
    else{
        printf("user is not authorized");
    }
    return 0;
}
