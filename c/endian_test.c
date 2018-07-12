#include<stdio.h>

int main(void){
    int num = 1;
    if(*(char*)&num == 1){
        printf("\n Little-Endian\n");
    }
    else {
        printf("\nBig-Endian\n");
    }
    return 0;
}
