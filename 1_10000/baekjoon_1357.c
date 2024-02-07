#include <stdio.h>
#include <stdlib.h>

int reverse(int a){
    if (a >= 1000){
        int a_thousand = a/1000;
        int a_hundred = a%1000/100;
        int a_ten = a%100/10;
        int a_one = a%10;
        return a_one*1000 + a_ten*100 + a_hundred*10 + a_thousand;
    }
    else if(a >= 100){
        int a_hundred = a/100;
        int a_ten = a%100/10;
        int a_one = a%10;
        return a_one*100 + a_ten*10 + a_hundred;
    }
    else if(a >= 10){
        int a_ten = a/10;
        int a_one = a%10;
        return a_one*10 + a_ten;
    }
    else
        return a;
}

int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", reverse(reverse(a) + reverse(b)));
    return 0;
}