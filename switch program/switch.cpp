#include <iostream>
using namespace std;
int main(){
    int num = 4;

    cout<<endl;

    switch( num ){
        case 1 : cout<<"first"<<endl;
                break;
        case 2 : cout<<"second"<<endl;
               break; 
        case 3 : cout<<"third"<<endl;
               break;
        case 4 : switch(num){
            case 4 : cout<<"value of num is" <<num <<endl;
               break;
            }
        
            default : cout<<"it is a default case "<<endl;
    }
    return 0;

}