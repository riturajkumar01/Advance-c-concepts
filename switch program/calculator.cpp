#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"ENTER THE VALUE OF A"<<endl;
    cin >> a;
    cout<<"ENTER THE VALUE OF B"<<endl;
    cin>>b;
    char op;
    cout<<"enter the operation you want to perform "<<endl;
    cin>>op;
    switch(op){
        case '+' : cout<< (a+b)<<endl;
        break;
        case '-' : cout<<(a-b)<<endl;
        break;
        case '*' : cout<<(a*b)<<endl;
        break;
        case '/' : cout<<(a/b)<<endl;
        break;
        case '%' : cout<<(a%b)<<endl;
        break;
        default  : cout<<"please enter a valid operator "<<endl;
        break;

    }
    return 0;


}