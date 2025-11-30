#include <iostream>
using namespace std;

int main() {
   int arr[] = {33,20,44,12,2};
    
   
   cout<<"Unsorted Array: ";
   for(int i = 0; i<=4;i++){
       cout<<arr[i]<<" ";
   }
   cout<<endl;
   for(int i=0; i<=4; i++)
   {
       for(int j=0; j<=3; j++){
           if(arr[j+1]<arr[j]){
           int temp = arr[j];
           arr[j] = arr[j+1];
           arr[j+1] = temp;
           
       }
       }
       
   }
    
    cout<<"Sorted Array:  ";
    
    for(int i= 0; i<=4; i++){
        cout<<arr[i]<<" ";

    } cout<<endl;
    
    int minVal = arr[0];
    int maxVal = arr[0];
    int minIndex = 0;
    int maxIndex = 0;
    
     for (int i = 1; i <= 4; i++) {
        if (arr[i] < minVal){
            minVal = arr[i];
            minIndex = i;
        }
        if (arr[i] > maxVal){
            maxVal = arr[i];
            maxIndex = i;
        }
    }
    cout << "Minimum Value: " << minVal<<" Index of min "<<minIndex<<endl;
    cout << "Maximum Value: " << maxVal <<" Index of max "<<maxIndex<< endl;


    
      
}