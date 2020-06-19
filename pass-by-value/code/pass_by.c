#include <stdio.h>

void passByValue(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void passByReference(int* c, int* d){
    int* temp = c;
    c = d;
    d = temp;
}

int main(){
    int a = 10;
    int b = 20;
    int c = 15;
    int d = 25;
    printf("\nBefore : a is %d, b is %d, c is %d, d is %d\n",a, b, c, d);
    passByValue(a, b);
    passByReference(&c, &d);
    printf("\nAfter  : a is %d, b is %d, c is %d, d is %d\n",a, b, c, d);
    return 0;
}