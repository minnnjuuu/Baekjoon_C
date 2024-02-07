#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    int n, m;
    scanf("%d %d", &n, &m);
    //메모리를 문자 4개의 공간으로 할당
    char* n_to_str = malloc(sizeof(char)*4); 
    //n_to_str에 정수 n을 문자로 변형시키기
    sprintf(n_to_str, "%d", n);

    if(strlen(n_to_str) * n < m){
        for (int i = 0; i < n; i++)
            printf("%d",n);
    }
    else{
        for (int i = 0; i < m; i++){
            printf("%c",n_to_str[i%strlen(n_to_str)]);
        }
    }
    free(n_to_str); 
    return 0;
}