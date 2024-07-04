// it is changed for the current function only. 
//It will not change the value of variable inside the caller method such as main()

#include<iostream>
using namespace std;
void change(int data);
int main(){
    int data = 6;
    change(data);
    cout<<" VALUE OF DATA : "<< data <<endl;
    return 0;

}
 void change(int data)
 {
     data = 10;
 }