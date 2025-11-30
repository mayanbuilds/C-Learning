#include <iostream>
using namespace std;

int main() {
    cout<<"Bubble Sort"<<endl;
    
 int arr[] = {11,3,20,54,22};
 cout<<"Unsorted Array"<<endl;
 for(int i = 0; i<=4; i++){
     cout<<arr[i]<<" ";
 }cout<<endl;
 
 for(int i=0; i<=4 ; i++){
     for(int j= 0; j<=3; j++){
         if(arr[j+1]<arr[j]){
         int temp=arr[j];
         arr[j]=arr[j+1];
         arr[j+1]=temp;
         }
     }
 }
 cout<<"sorted array"<<endl;
 for(int i=0;i<=4; i++){
     cout<<arr[i]<<" ";
 }
 

    return 0;
}