#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int test_aeiou(char word){
    char arr_aeiou[5] = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < 5; i++){
        if(word == arr_aeiou[i])
            return 1;
    }
    return 0;
}

int main(void){
    char word[101];
    scanf("%s", &word);
    int word_len = strlen(word);
    int cnt = 0;
    //각 자리마다 모음있는지 검사
    for (int i = 0; i < word_len; i++)
        cnt += test_aeiou(word[i]);
    printf("%d", cnt);
    return 0;
}