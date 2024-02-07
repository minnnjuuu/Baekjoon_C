#include <stdio.h>
#include <stdlib.h>

int main(void){
    int repeat;
    scanf("%d", &repeat);
    char sentence[31];
    for (int i = 0;i < repeat; i++){
        //문장 공백 포함 입력받기
        scanf(" %[^\n]s", sentence);
        if(sentence[0] >= 'a' && sentence[0] <= 'z')
            sentence[0] -= 32;
        printf("%s\n", sentence); 
    }
    return 0;
}