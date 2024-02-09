#include <stdio.h>

int main(void){
    char word[105];
    scanf("%s", &word);
    int cnt = 0;
    for ( int i = 0; i < 100; i++){
        if(word[i] == ',')
            cnt++;
    }
    printf("%d", cnt + 1);
}