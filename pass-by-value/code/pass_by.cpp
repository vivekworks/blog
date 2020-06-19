#include <iostream>
using namespace std;

void swapByPointerDereference(int* a4, int* b4){
    cout << "\nEnters : a4 value is " <<a4 <<", b4 value is " << b4;
    cout << "\nEnters : a4 address is " << &a4 <<", b3 address is " << &b4;
    int temp = *a4;
    *a4 = *b4;
    *b4 = temp;
    cout << "\nExits  : a4 value is " <<a4 <<", b4 value is " << b4;
    cout << "\nExits  : a4 address is " << &a4 <<", b4 address is " << &b4 << "\n";
}

void swapByReference(int& a3, int& b3){
    cout << "\nEnters : a3 value is " <<a3 <<", b3 value is " << b3;
    cout << "\nEnters : a3 address is " << &a3 <<", b3 address is " << &b3;
    int temp = a3;
    a3 = b3;
    b3 = temp;
    cout << "\nExits  : a3 value is " <<a3 <<", b3 value is " << b3;
    cout << "\nExits  : a3 address is " << &a3 <<", b3 address is " << &b3 << "\n";
}

void swapByValue(int a1, int b1){
    cout << "\nEnters : a1 value is " <<a1 <<", b1 value is " << b1;
    cout << "\nEnters : a1 address is " << &a1 <<", b1 address is " << &b1;
    int temp = a1;
    a1 = b1;
    b1 = temp;
    cout << "\nExits  : a1 value is " <<a1 <<", b1 value is " << b1;
    cout << "\nExits  : a1 address is " << &a1 <<", b1 address is " << &b1 << "\n";
}

void swapByPointer(int* a2, int* b2){
    cout << "\nEnters : a2 value is " <<a2 <<", b2 value is " << b2;
    cout << "\nEnters : a2 address is " << &a2 <<", b2 address is " << &b2;
    int* temp = a2;
    a2 = b2;
    b2 = temp;
    cout << "\nExits  : a2 value is " <<a2 <<", b2 value is " << b2;
    cout << "\nExits  : a2 address is " << &a2 <<", b2 address is " << &b2 << "\n";
}

void declareVariables(){
    int var = 45;                //Simple  variable  , stores 45 as its value
    int* varPtr = &var;          //Pointer variable  , stores the address of a as its value
    int** varPtrPtr = &varPtr;   //Pointer variable  , double pointer, stores the address of aptr as its value
    int& varRef = var;           //Reference variable, acts as a reference to a
    int* varRefPtr = &varRef;    //Pointer variable  , stores the address of aref as its value  

	cout << "\nvar       : " << var;
    cout << "\nvarPtr    : " << varPtr;
    cout << "\nvarPtrPtr : " << varPtrPtr;
    cout << "\nvarRef    : " << varRef;
    cout << "\nvarRefPtr : " << varRefPtr;
}

int main(){
    int a1 = 45;
    int b1 = 65;
    int a2 = 15;
    int b2 = 35;
    int a3 = 25;
    int b3 = 55;
    int a4 = 75;
    int b4 = 95;

    declareVariables();
    
    cout << "\n*-----Swap By Value-----*";
    cout << "\nBefore : a1 value is " << a1 << ", b1 value is " << b1;
    cout << "\nBefore : a1 address is " << &a1 << ", b1 address is " << &b1;
    swapByValue(a1, b1);
    cout << "After  : a1 value is " << a1 << ", b1 value is " << b1 << "\n";
    cout << "After  : a1 address is " << &a1 << ", b1 address is " << &b1 << "\n";
    
    cout << "\n*-----Swap By Pointer-----*";
    cout << "\nBefore : a2 value is " << a2 << ", b2 value is " << b2;
    cout << "\nBefore : a2 address is " << &a2 << ", b2 address is " << &b2;
    swapByPointer(&a2, &b2);
    cout << "After  : a2 value is " << a2 << ", b2 value is " << b2 << "\n";
    cout << "After  : a2 address is " << &a2 << ", b2 address is " << &b2 << "\n";
    
    cout << "\n*-----Swap By Reference-----*";
    cout << "\nBefore : a3 value is " << a3 << ", b3 value is " << b3;
    cout << "\nBefore : a3 address is " << &a3 << ", b3 address is " << &b3;
    swapByReference(a3, b3);
    cout << "After  : a3 value is " << a3 << ", b3 value is " << b3 << "\n";
    cout << "After  : a3 address is " << &a3 << ", b3 address is " << &b3 << "\n";

    cout << "\n*-----Swap By Pointer Dereference-----*";
    cout << "\nBefore : a4 value is " << a4 << ", b4 value is " << b4;
    cout << "\nBefore : a4 address is " << &a4 << ", b4 address is " << &b4;
    swapByPointerDereference(&a4, &b4);
    cout << "After  : a4 value is " << a4 << ", b4 value is " << b4 << "\n";
    cout << "After  : a4 address is " << &a4 << ", b4 address is " << &b4 << "\n";
    
}