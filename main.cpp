#include <iostream>
#include "cmake-build-debug/List.cpp"
#include "cmake-build-debug/List.h"

using namespace std;

int main(int argc, char** argv) {
    List newList;
    for (int a = 0; a < 100; a += 10) {
        newList.AddNode(a);
    }
    newList.PrintList();
    return 0;
}
