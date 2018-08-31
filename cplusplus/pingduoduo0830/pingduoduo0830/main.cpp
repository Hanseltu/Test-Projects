//
//  main.cpp
//  pingduoduo0830
//
//  Created by tuhaoxin on 2018/8/30.
//  Copyright © 2018 dlut. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int n,m;
    int i,j;
     int flag=0;
    //vector<vector<char>> array1;
    cin >> n >> m;
    
    char array[n][m];
    
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            char temp;
            cin >> temp;
            array[i][j] = temp;
        }
    }
    
    for(i=0; i<n; i++){
        for (j=0; j<m; j++){
            if (array[i][j] == 'o'){
            
                if (i < n-1 && array[i+1][j] == '.'){
                    array[i+1][j] = 'o';
                    array[i][j] = '.';
                }
        
                if (i < n-1 && array[i+1][j] == 'x')
                    continue;
        
                if (i < n-1 && array[i+1][j] == 'o'){
                   
                    for (int k=i+1; k<n;k++){
                        if (array[k][j] == 'x'){
                            flag = 1;
                        }
                        
                    }
                        
                    }
                    
                    if (flag)
                        continue;
                    else
                        array[i][j] = '.';
                    
                }
                
        
                //if (i < n-1 && array[i+1][j] == 'o'){
                //    array[i][j] = '.';
                //}
                
                if (i==n-1){
                    array[i][j] = '.';
                    
                }
            }
        }
    
    for (i=0; i<n; i++){
        for (j=0; j<m; j++)
            cout << array[i][j];
        cout << endl;
    }
    
    return 0;
}
