#include<iostream>
using namespace std;
void printcounting(int n){
    for(int i = 0 ; i<=n; i++){
        cout<< i <<endl;
    }
}
int main(){
    int n;
    cin>>n;
    printcounting(n);
    return 0;
}