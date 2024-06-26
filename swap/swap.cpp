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
    int even[10]={2,5,6,7,-4,-9,8,-1,9,10};
    int odd[10]={1,5,3,4,6,7,-3,-5,-2,11};
    

    
    swapAlternate(even,10);
    printArray(even,10);
    
    swapAlternate(odd,10);
    printArray(odd,10);
}