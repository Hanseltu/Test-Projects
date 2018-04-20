#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int b(int* arr,int target)
{
    int low=0,high =sizeof(arr)/sizeof(int),mid;
    while(low <= high){
    mid = (low+high)/2;
    if(arr[mid] == target)
    {
        return mid;
    }
    if(arr[mid] > target)
    {
        high = mid -1;
    }
    else
        low = mid + 1;
    }
    if(arr[high] < target)
        return high;
    return low;
}

int main(){
    //iint arr[] = {1,2,3,4};
    int *arr=(int*)malloc(sizeof(int)*100);
    int i,target;
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&target);
    printf("%d \n",b(arr,target));
    return 0;

}
