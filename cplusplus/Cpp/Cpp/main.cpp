//
//  main.cpp
//  Cpp
//
//  Created by tuhaoxin on 2018/8/8.
//  Copyright © 2018 dlut. All rights reserved.
//

#include <iostream>

const double Inch_per_feet = 12.0L;

int main(int argc, const char * argv[]) {
    // insert code here...
    using namespace std;
    cout << "Please enter your height:___ \b\b\b\b\b";
    double ht_int;
    cin >> ht_int;
    
    double ht_feet = ht_int/Inch_per_feet;
    cout << "Your height is : " << ht_feet << "feets \n";
    std::cout << "Hello, World!\n";
    return 0;
}
