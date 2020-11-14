#include <iostream>
#include <cstdlib>
#include <time.h>
#include <algorithm>
#include <chrono>
using namespace std;
void sort1(int b[]){
    for(int k = 0; k<500;k++) {
        for (int j = 0; j < 500; j++) {
            if (b[j] < b[j + 1]) {
                swap(b[j], b[j + 1]);
            }
        }
    }
};
void sort2(int a[]){
    int asize = sizeof(a) / sizeof(a[0]);
    sort(a, a+asize);
}
void ap(int b[]){
    for (int j = 0; j < 500; j++) {
        cout<< b[j] << " ";
    }
}
int main() {
    int b[500];
    for (int j = 0; j < 500; j++) {
        b[j] = rand() % 1000;
    }
    cout << "Array before sorting: ";
    ap(b);
    cout << "\n Sort 1:";
    clock_t start = clock();
    sort1(b);
    ap(b) ;
    clock_t end = clock();
    double seconds = (double)(end - start) / CLOCKS_PER_SEC;
    cout <<"\n Time in seconds: "<< seconds;

      cout << "\n Sort 2:";
    clock_t st = clock();
    sort2(b);
    ap(b) ;
    clock_t en = clock();
    double sec = (double)(en - st) / CLOCKS_PER_SEC;
    cout <<"\n Time in seconds: "<< sec;

    if(sec<seconds){
        cout << "\n Second sort faster";
    }
    else{
        cout << "\n First sort faster";
    }
}
