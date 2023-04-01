#include<iostream>
#include"login.h"
using namespace std;
const int N = 100010;
int main()
{
    int a[N]={0};
    for(auto & v : a)
    {
        ++v;
        cout << v << ' ';
    }
    return 0;
}
