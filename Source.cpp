//
//  main.cpp
//  Pointers
//
//  Created by Prashant Puthukkudi on 28/06/23.
// 
//

#include <iostream>

int main(int argc, const char* argv[]) {

    /*
    * Application is 32 bit so int take 4 bytes
    */
    int* ptr = nullptr; //void * ptr = 0;   // Pointer to typeless data and with memory address of zero (address 0 / nullptr is invalid)

    int var = 2;
    ptr = &var;  // & will return address of var in memory

    *ptr = 20; // void* can't hold address of int 

    /*
    * char takes 1 byte
    * Below line allocates 8 bytes on memory on heap
    * Them memset() set value 0 in those address block
    */
    char* OnHeap = new char[8]; 
    memset(OnHeap,1,8);
        
     // Below statement creates pointer to pointer
    char** ptr2 = &OnHeap; 


    std::cin.get();
}