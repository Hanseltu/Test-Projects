//
//  main.cpp
//  test360
//
//  Created by tuhaoxin on 2018/8/27.
//  Copyright © 2018 dlut. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int countFun(vector<int> array) {
    int len = array.size();
    
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j <= len; j++) {
            int num = array[i];
            if (array[j] == num) {
                // 重复，数组总长度减1
                len--;
                
                i++;
            }
        }
    }
    
    return len;
}


int main(int argc, const char * argv[]) {
    int n,m,q;
    vector<int> flower,question,result,count;
    cin >> n >>m;
    
    for (int i=0;i<n;i++){
        int input;
        cin >> input;
        if (input<=m){
            flower.push_back(input);
        }
    }
    
    cin >> q;
    
    
    for (int i=0;i<q*2;i++){
        int in;
        cin >> in;
        question.push_back(in);
    }
    //int count = 0;
    for(int i=0;i<question.size();i+=2){
        int start = i;
        int end = i+1;
        for (int j=question[start];j<=question[end];j++){
            int temp = flower[j-1];
            result.push_back(temp);
            }
        int t = countFun(result);
        count.push_back(t);
        result.clear();
        }
    
    for(int i=0; i<count.size();i++){
        cout << count[i] <<endl;
    }
    
    return 0;
}
