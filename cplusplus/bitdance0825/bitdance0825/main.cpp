//
//  main.cpp
//  bitdance0825
//
//  Created by tuhaoxin on 2018/8/25.
//  Copyright © 2018 dlut. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    int input1,input2;
    vector<int> origin,originadd,count;
    cin >> input1;
    cin >> input2;
    if (input1 ==0 || input2==0){
        cout << 0;
        return 0;
    }
    for (int i=0; i<input1;i++){
        int in;
        cin >> in;
        origin.push_back(in);
    }
    
    for(int i=0;i<input2;i++){
        //int j=0;
        for(int j=0;j<input1;j++){
            originadd.push_back(origin[j]);
        }
    }
    
    for(int i=0;i<originadd.size();i++){
        int temp = originadd[i];
        int cn=1;
        for(int j=i+1; j<originadd.size();j++){
            if (temp <= originadd[j]){
                temp = originadd[j];
                ++cn;
            }
        }
        count.push_back(cn);
    }
    
    int maxnum = 0;
    for (int i=0; i<count.size();i++){
        if (maxnum < count[i])
            maxnum = count[i];
        if (i == count.size()-1)
            cout << maxnum <<endl;
    }
   //printf("%d \n",maxnum);
    return 0;
}

