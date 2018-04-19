//
//  main.c
//  Goldbach
//
//  Created by tuhaoxin on 2017/11/4.
//  Copyright © 2017年 dlut. All rights reserved.
//

#include <math.h>
#include <stdio.h>
int main( )
{
    while (1) {
    long int j,n,p,q,flagp,flagq;//定义整型即可满足题意
    printf("please input n :");
    scanf("%ld",&n );
    if (((n%2)!=0)||(n<=4))
        printf("input data error!\n");
    else
    { p=1;
        do {
            p=p+1;
            q=n-p;
            flagp=1;
            for(j=2;j<=(int)(sqrt(p));j++)
            {
                if ((p%j)==0)
                {
                    flagp=0;
                    break;
                }
            }
            flagq=1;
            for(j=2;j<=(int)(sqrt(q));j++)
                
            {
                if(q%j==0)
                {
                    flagq=0;
                    break;
                }
            }
            /*此处没有必要运用两组for循环分别判断是否满足素数，
             当第一个数p不满足素数时，仍对原有的q进行了不必要的判断，冗杂繁复，
             将两个数的素数判断都置于一个for循环中即可*/
        } while(flagp*flagq==0);
        //当有一组数字满足条件时，flagp*flagq==1,即跳出while循环，无法输出所有组合
        
        printf("%d %d\n",p,q);
    }
    }
    return 0;
}

