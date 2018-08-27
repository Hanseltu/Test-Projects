//
//  main.cpp
//  Cpp
//
//  Created by tuhaoxin on 2018/8/8.
//  Copyright © 2018 dlut. All rights reserved.
//

#include <iostream>
#include <vector>

//源程序
int main(int argc, const char * argv[]) {
   
    using namespace std;
    
    cout << "Please enter the Nu.1 \n";
    int nu1;
    cin >> nu1;
    //cout << nu1;1
    
    vector<int> res;
    vector<int> output;
    vector<int> ret;
    
    cout << "Please enter the Nu.2 \n";
    
    int a = 0,b = 0;
    for (int i=0;i<nu1;i++)
    {
        cin >> a;
        res.push_back(a);
        //cout << res[i];
    }
    
    cout << "Please enter the Nu.3 \n";
    int count;
    cin >> count;
    
    cout << "Please enter the Nu.4 \n";
    for (int i=0;i<count;i++)
    {
        cin >> b;
        output.push_back(b);
        //cout << res[i];
    }    //cout << count;
    
    
    
    for (int i = 0; i< output.size();i++)
    {
        int total = 0 ;
        for (int j = 0; j<res.size();j++){
            int cn = output[i];
            total += res[j];
            if (cn > total){
                continue;
            }
            if (cn <= total) {
                ret.push_back(j);
                break;
            }
        }
            
    }
    
    cout << "The result is ";
    for (int i=0;i<ret.size();i++){
        
        cout << ret[i]+1 << endl;
    }
    
    return 0;
}
