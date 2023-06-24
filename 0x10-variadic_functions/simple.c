#include <stdarg.h>
#include <stdio.h>
/**
 * 
 * va_list 
 * declare va_list  
 * */

int check(int a, ...){
    va_list list;

    va_start(list, a);

    va_arg(list, int);


    va_end(list);
}
/**
 * sum_up - sums up n numbers
*/
int Sum(int n, ...)
{
    va_list list;

    int total = 0;
    va_start(list, n);

    for(int i = 0; i < n; i++){
        int num;
        num = va_arg(list, char);
        total += num;
    }

    va_end(list);
    return total;
}
int main(int argc, char const *argv[])
{
    int total= Sum(4, 1, 1, 10, 1);

    printf("%d", total);

    return 0;
}
