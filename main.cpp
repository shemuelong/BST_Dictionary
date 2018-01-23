#include "BST.h"
#include <ctime>
#include <random>

int random(int a[], int size){
    for(int i = 0; i <= size; i ++){
        std::cout << a[i] << ", ";
    }
    std::cout << std::endl;

    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<> dist(0, size);
    int y = dist(mt);
    std::cout << "y: " << y << std::endl;
    int temp = a[size];
    a[size] = a[y-1];
    a[y-1] = temp;
    return a[size];


}

int main() {

    BST<int,int> a;
    int y;
    const int SIZE = 8;
    int x[SIZE] = {1,2,3,4,5,6,7,8};

    for(int i = 0; i < SIZE; i++){
        a.insert(x[i],x[i]);
    }
    a.print();
    std::cout << "tree cleared " << std::endl;
    a.clear();


    for(int i = 0; i < SIZE; i++){
        a.insert(x[SIZE-1-i],x[SIZE-1-i]);
    }
    a.print();
    std::cout << "tree cleared " << std::endl;
    a.clear();

    for(int i = 0; i < SIZE - 1; i++){
        int z = random(x,SIZE - i - 1);
        a.insert(z,z);
    }
    a.print();
    std::cout << "tree cleared " << std::endl;
    a.clear();

    return 0;
}
