//
//  main.c
//  SeekSaddlePoint
//
//  Created by tuhaoxin on 2017/10/23.
//  Copyright © 2017年 dlut. All rights reserved.
//

#include <stdio.h>

#define R 50
#define C 50
int a[R][C];
int InputOutput(void);
int SeekSaddlePoint(int a[R][C]);
int main(int argc, const char * argv[]){
    InputOutput();
    return 0;
}
int InputOutput(void){
    int r=0,c=0,i,j;
    int num=0;
    printf("请输入数组的行数:\n");
    scanf("%d",&r);
    printf("请输入数组的列数:\n");
    scanf("%d",&c);
    for (i=0; i<r; i++) {
        printf("请输入第%d行数据:\n",i+1);
        for (j=0; j<c; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            printf("%d",a[i][j]);
            num ++;
            if (num%c == 0) {
                printf("\n");
            }
        }
   
    }
    return 0;
}
int SeekSaddlePoint(int a[R][C]){
    int r = R;
    int c = C;
    int i,j;
    int max ;
    for (i=0; i<r; i++) {
        max = a[i][0];
        
    }
    return 0;
}
