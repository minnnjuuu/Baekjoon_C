#include <stdio.h>
#include <string.h>

int main(void){
    int cnt;
    scanf("%d", &cnt);
    for (int i = 0; i < cnt; i++){
        char word[25];
        char compare_word[25];
        scanf("%s %s", &word, &compare_word);
        int word_len = strlen(word);
        printf("Distances: ");
        for (int j = 0; j < word_len; j++){
            if ((int)word[j] <= (int)compare_word[j])
                printf("%d ", (int)compare_word[j] - (int)word[j]);
            else
                printf("%d ", 26 + (int)compare_word[j] - (int)word[j]);
        }
        printf("\n");
    }
    return 0;
}