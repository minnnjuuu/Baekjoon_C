#include <stdio.h>
#include <stdlib.h>

int main(){
    char word[101];
    scanf("%s",word);
    for (int i = 0; i < 101; i++){
        if (word[i] >= 'a' && word[i] <='z'){
            word[i] = word[i] - 32;
        }
        else if(word[i] >= 'A' && word[i] <= 'Z'){
            word[i] = word[i] + 32;            
        }
    }
    printf("%s", word);
    return 0;
}
