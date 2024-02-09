#include <stdio.h>
#include <string.h>

int main(void){
    char word[105];
    scanf("%s", &word);
    int word_len = strlen(word);
    //알파벳 : 26개
    int alphabet_cnt[27] = {0};

    for (int i = 0; i < word_len; i++){
        int word_ascii = (int)word[i];
        alphabet_cnt[word_ascii - 97]++;
    }
    for (int i = 0; i < 26; i++)
        printf("%d ", alphabet_cnt[i]);
    return 0;
}