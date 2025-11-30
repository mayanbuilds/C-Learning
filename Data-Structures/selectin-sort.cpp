#include <iostream>
using namespace std;

int main() {
    cout<<"Selection Sort"<<endl;
    
 int arr[] = {11,3,20,54,22};
 cout<<"Unsorted Array"<<endl;
 for(int i = 0; i<=4; i++){
     cout<<arr[i]<<" ";
 }cout<<endl;
 
 for(int i=0; i<5 ; i++){
     int MinIndex=i;
     for(int j= i+1; j<5; j++){
         if(arr[j]<arr[MinIndex]){
             MinIndex=j;
         }
        
         }
         swap(arr[MinIndex],arr[i]);
     }
 cout<<"sorted array"<<endl;
 for(int i=0;i<=4; i++){
     cout<<arr[i]<<" ";
 }
 

    return 0;
}