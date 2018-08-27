//
//  main.cpp
//  geendry
//
//  Created by tuhaoxin on 2018/8/18.
//  Copyright © 2018 dlut. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
class Data{
public:
    int operator <=(Data a) const
    {
        return(f<=a.f);
    }
    int s,f;
};
void Sort(Data *d,int n)
{
    int i,j,flag;
    Data temp;
    
    for(i=1;i<=n;i++){
        flag = 0;
        for(j=n;j>i;j--){
            //如果前一个数大于后一个数，则交换
            if(d[j]<=d[j-1]){
                temp = d[j];
                d[j] = d[j-1];
                d[j-1] = temp;
                flag = 1;
            }
        }
        //如果本次排序没有进行一次交换，则break，减少了执行之间。
        if(flag == 0){
            break;
        }
    }
}
vector<int> GeedySelector(int n,int s[],int f[],bool a[])
{
    vector<int> ret;
    Data *d=new Data[n];
    for(int i=1;i<=n;i++)
    {
        d[i].s=s[i];
        d[i].f=f[i];
    }
    Sort(d,n);
    /*for(int i=1;i<=n;i++)
     {
     cout<<d[i].f<<endl;
     }*/
    a[1]=true;
    int j=1;
    
    for(int i=2;i<=n;i++)
    {
        if(d[i].s>=d[j].f)
        {
            a[i]=true;
            j=i;
            
        }
        else{
            a[i]=false;
        }
    }
    //int count=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i]==true)
        {   //cout<<"-----"<<endl;
            //cout<<d[i].s<<" "<<d[i].f<<endl;
            ret.push_back(i);
        }
        
    }
    return ret;
}
int main()
{   int n;
    //cout<<"输入n"<<endl;
    cin>>n;
    //cout<<"输入n组数据"<<endl;
    int s[100];
    int f[100];
    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
        cin>>f[i];
    }
    bool a[n];
    vector<int> result;
    result=GeedySelector(n,s,f,a);
    if (result.size() != 0){
    for (int i=0; i<result.size();i++){
        cout << result[i];
    }
       
    }
    else {
        cout << 0;
    }
    cout << "\n";
    return 0;
}
