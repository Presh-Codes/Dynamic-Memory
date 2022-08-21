#include <iostream>

int main(){
    int *p = new int;
    *p = 5;
    std::cout << *p;
}