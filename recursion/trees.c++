#include<iostream>
using namespace std;

int fun(int n){
    static int x = 0;
    if(n>0){
        x++;
        return fun(n-1)+n;
    }
    return 0;
}


int main(){
    int a = 5;
    cout<<fun(a);
    return 0;
}