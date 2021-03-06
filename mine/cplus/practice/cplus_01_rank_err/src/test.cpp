#include "test.h"

#include <iostream>  
#include <type_traits>  

//using namespace std;  

template<class T>  
bool myfunc1(T* a, T* b) {  
    if (b->rank > a->rank) {  
        return true;  
    } else {  
        return false;  
    }  
}  
  
//template<class T>  
//bool myfunc2(T* a, T* b) {  
//    if (a->rank < b->rank) {  
//        return true;  
//    } else {  
//        return false;  
//    }  
//}  
  
//template<class T>  
//bool myfunc3(T* a, T* b) {  
//    if ((*a).rank < (*b).rank) {  
//        return true;  
//    } else {  
//        return false;  
//    }  
//}  
  
struct Node {  
    char rank = 0;  
};  
  
#ifndef UNIT_TEST
int main(int argc, char *argv[]) {
#else
int inner_main(int argc, char *argv[]) {
#endif
    Node* m1 = new Node;  
    Node* m2 = new Node;  
    myfunc1(m1, m2);  
    // http://en.cppreference.com/w/cpp/types/rank
    std::cout << std::rank<int[1][2][3][4]>::value << std::endl;  
    std::cout << std::rank<int[1][2][3]>::value << std::endl;  
    std::cout << std::rank<int[1][2]>::value << std::endl;  
    std::cout << std::rank<int[1]>::value << std::endl;  
    std::cout << std::rank<int>::value << std::endl;  
    std::cout << "hello" << std::endl;
    return 0;
}  
