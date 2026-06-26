#include <iostream>
#include "clsMyQueue.h"
using namespace std;

int main(){
    
    clsMyQueue <int> MyQueue;

    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);
    MyQueue.push(40);
    MyQueue.push(50);

    cout << "\nQueue:\n";
    MyQueue.print();

    cout << "\nQueue Size : " << MyQueue.Size();
    cout << "\nQueue Front : " << MyQueue.front();
    cout << "\nQueue Back : " << MyQueue.Back();

    MyQueue.pop();

    cout << "\n\nQueue After Pop:\n";
    MyQueue.print();

    cout << "\n\nItem(5) : " << MyQueue.GetItem(3);

    MyQueue.Reverse();
    cout << "\n\nQueue After Reverse:\n";
    MyQueue.print();

    MyQueue.UpdateItem(2, 22);
    cout << "\n\nQueue After Updating item 2 to 22:\n";
    MyQueue.print();

    MyQueue.InsertAfter(1, 200);
    cout << "\n\nQueue After insert 200 after item 1 :\n";
    MyQueue.print();

    MyQueue.InsertAtFront(500);
    cout << "\n\nQueue After insert 500 At Front :\n";
    MyQueue.print();

    MyQueue.InsertAtBack(5000);
    cout << "\n\nQueue After insert 5000 At Back :\n";
    MyQueue.print();

    MyQueue.Clear();

    cout << "\n\nQueue After clear() :\n";
    MyQueue.print();

    system("pause>0");
}

