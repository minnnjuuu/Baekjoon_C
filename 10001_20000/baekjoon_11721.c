#include <stdio.h>
#include <string.h>

int main(void){
    char word[101];
    scanf("%s", &word);
    int word_len = strlen(word);
    printf("%c", word[0]);
    for (int i = 1; i < word_len; i++){
        if (i % 10 == 0)
            printf("\n");
        printf("%c", word[i]);
    }
    return 0;
}