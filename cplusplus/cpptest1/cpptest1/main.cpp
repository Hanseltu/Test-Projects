//
//  main.cpp
//  cpptest1
//
//  Created by tuhaoxin on 2018/8/28.
//  Copyright © 2018 dlut. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class Line
{
public:
    int getLength( void );
    Line( int len );             // 简单的构造函数
    Line( const Line &obj);  // 拷贝构造函数
    ~Line();                     // 析构函数
    
private:
    int *ptr;
};

// 成员函数定义，包括构造函数
Line::Line(int len)
{
    cout << "Normal constructor allocating ptr" << endl;
    // 为指针分配内存
    ptr = new int;
    *ptr = len;
}

Line::Line(const Line &obj)
{
    cout << "Copy constructor allocating ptr." << endl;
    ptr = new int;
    *ptr = *obj.ptr; // copy the value
}

Line::~Line(void)
{
    cout << "Freeing memory!" << endl;
    delete ptr;
}
int Line::getLength( void )
{
    return *ptr;
}

void display(Line obj)
{
    cout << "Length of line1 : " << obj.getLength() <<endl;
}

struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        
        int len = vin.size();
        //int mid;
        
        if(len == 0)
            return NULL;
        TreeNode* result = new TreeNode(pre[0]);
        vector<int> rpre,lpre,rvin,lvin;
        int p = 0;
        for (p;p<len;++p){
            if (pre[0] == vin[p]){
                //mid = i;
                break;
            }
        }
        
        
        for(int i=0;i<len;++i){
            if(i<p){
                lvin.push_back(vin[i]);
                lpre.push_back(pre[i+1]);
            }
            else if (i>p) {
                rvin.push_back(vin[i]);
                rpre.push_back(pre[i]);
            }
        }
        
        result->left = reConstructBinaryTree(lpre,lvin);
        result->right = reConstructBinaryTree(rpre,rvin);
        return result;
        
    }};// 程序的主函数

void Choice(int a[],int n)
{
    int i,j;
    for(i = 0;i < n;i++) {          //外层循环轮询每一个位置
        for(j = i+1;j < n;j++) {    //通过与后面的比较找出最大或者最小放到此位置.
            if(a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main( )
{
    //Line line1(10);
    
    //Line line2 = line1; // 这里也调用了拷贝构造函数
    
    //display(line1);
    //display(line2);
    
    //vector<int> a = {1,2,4,7,3,5,6,8};
    //vector<int> b = {4,7,2,1,5,3,8,6};
    
    //Solution s;
    //TreeNode* result = s.reConstructBinaryTree(a,b);
    
    int a[] = {2,1,5,4};
    Choice(a, 4);
    
    for (int i=0;i<4;i++)
        cout << a[i] << endl;
    
    return 0;
}
