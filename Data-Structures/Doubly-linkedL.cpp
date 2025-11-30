#include <iostream>
using namespace std;

class Node {
public:
   int data;
   Node* Next;
   Node* prev;
};

int main() {
    Node n1,n2,n3,n4;
  
    
    n1.data=10;
    n2.data=11;
    n3.data=20;
    n4.data=25;
    
    n1.Next=&n2;
    n2.Next=&n3;
    n3.Next=&n4;
    n4.Next=nullptr;
    
    
    n4.prev=&n3;
    n3.prev=&n2;
    n2.prev=&n1;
    n1.prev=nullptr;
    
    Node* Current=&n1;
    while(Current!=nullptr){
        cout<<Current->data<<" -> ";
        Current=Current->Next;
    }
    cout<<" "<<endl;
    Node* previous=&n4;
    while(previous!=nullptr){
        cout<<previous->data<<" <-> ";
        previous=previous->prev;
    }
    
    
    
    
    
    
    
    

    return 0;
}
