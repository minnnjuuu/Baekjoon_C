#include <stdio.h>
#include <string.h>

int main(void){
    char code_arr[501];
    char END[] = "END";
    while(1){
        gets(code_arr);
        if (strcmp(code_arr, END) == 0)
            break;
        else{
            int code_len = strlen(code_arr);
            for(int i = code_len - 1; i >= 0; i--)
                printf("%c", code_arr[i]);
            printf("\n");
        }
    }
    return 0;
}