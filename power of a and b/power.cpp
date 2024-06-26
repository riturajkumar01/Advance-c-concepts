#include<iostream>
using namespace std;

int pow(int a, int b){

    int sol = 1;

    for(int i = 0; i<b; i++){
        sol = sol * a;
    }
    return sol;

}
int main(){
    int a,b;
    cin>>a>>b;

   int solution = pow(a,b);
   cout<<"solution : "<<solution<<endl;
    return 0;
}