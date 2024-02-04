#include <stdio.h>
#include <stdlib.h>
int second_calc(){
    int h, m, s;
    scanf("%d:%d:%d", &h, &m, &s);
    return h*3600 + m*60 + s;
}

int main(void){
    int current, next;
    current = second_calc();
    next = second_calc();
    int sec_time_minus;
    if (current<next)
        sec_time_minus = next - current;
    else
        sec_time_minus = 86400 + next - current;
    int calc_h, calc_m, calc_s;
    calc_h = sec_time_minus/3600;
    calc_m = sec_time_minus%3600/60;
    calc_s = sec_time_minus%60;
    printf("%02d:%02d:%02d", calc_h, calc_m, calc_s);
    return 0;
}