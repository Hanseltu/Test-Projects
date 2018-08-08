/*
**对数组的操作
**
**顺时针旋转90°，逆时针旋转90°，旋转180°。
*/

#include<stdio.h>

int main(){
  int matrix[100][100];
  int test[2][2] = {1,2,3,4};
  int m,n;
  int i,j;
  printf("Please input the row and column:\n");
  scanf("%d,%d", &n,&m);

  for(i=0; i<n; i++){
    for ( j=0; j<m; j++){
    	scanf("%d",&matrix[i][j]);
        //printf("%d \n",matrix[i][j]);
    }
  }

  printf("Input finish!\n\n\n");

  //print the matrix
  printf("Input matrix\n");
  for (i=0; i<n; i++){
    for ( j=0; j<m; j++){
    	printf("%d \t",matrix[i][j]);
    }
    printf("\n");
  }

  printf("shunshizhen 90\n");
  for (i=0; i<m;i++){
    for (j=0; j<n; j++){
    	printf("%d\t",matrix[j][i]);
    }
    printf("\n");
  }

  printf("nishizhen 90\n");
  for(i=m-1;i>=0;i--){
    for(j=0;j<n;j++){
    	printf("%d \t",matrix[j][i]);
    }
    printf("\n");
  }

  printf("xuanzhuan 180 \n");
  for(i=n-1;i>=0;i--){
    for(j=m-1;j>=0;j--){
    	printf("%d\t",matrix[i][j]);
    }
    printf("\n");
  }
  return 0;
}

