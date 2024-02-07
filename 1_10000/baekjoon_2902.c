#include <stdio.h>
#include <stdlib.h>

int main(void){
    char name[101];
    scanf("%s",&name);
    printf("%c", name[0]);
    for (int i = 1; i < 100; i++){
        int name_ascii = (int)name[i];
        if (name_ascii == 45)
            printf("%c", name[i+1]);
    }
    return 0;
}