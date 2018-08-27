//
//  main.cpp
//  shellSort
//
//  Created by tuhaoxin on 2018/8/18.
//  Copyright © 2018 dlut. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

void shellSort(vector<int> a, int n){
    int i,j,k,group;
    //分组
    for(group = n/2; group > 0;group /= 2){
        
        //对每个组进行操作
        for(i = 0; i<group;i++){
            
            //每个组内进行插入排序
            for(j=i+group; j<n; j+=group){
                if (a[j-group] > a[j]){
                    int temp = a[j];
                    k = j - group;
                    while (k>=0 && a[k]>temp) {
                        a[k+group] = a[k];
                        k -= group;
                    }
                    a[k] = temp;
                }
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> array = {1,51,6,2,8,2,564,1,65,6};
    int size = array.size();
    
    shellSort(array, size);
    
    for (int i=0; i<size; i++){
        cout << array[i] << endl;
    }
    return 0;
}
