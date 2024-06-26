// SWAP PROGRAM
#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swapAlternate( int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int even[100];
    int odd[100];
    

    
    swapAlternate(even,100);
    printArray(even,100);
    
    swapAlternate(odd,100);
    printArray(odd,100);
}