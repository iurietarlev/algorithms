#include <iostream>
using namespace std;

// FUNCTION DECLARATIONS
int binary_search(int number, int* a, int low, int high);
int linear_search(int number, int* a, int length);

// MAIN
int main(){
    int list[] = {10, 12, 50, 100, 800, 825, 850, 875, 900, 950, 1000, 1500};
    int number = 1500;
    int length = sizeof(list)/sizeof(list[0]);

    //linear search
    cout << "Using linear search the position of number " << number
         << " is: ";
    cout << linear_search(number, list, length) << endl;

    //binary search
    cout << "Using binary search the position of number " << number
         << " is: "; 
    cout << binary_search(number, list, 0, length - 1) << endl; 
    return 0;
}

// FUNCTION DEFINITIONS
int linear_search(int number, int* a, int length){
    for(int i = 0; i < length; i++)
        if(number == a[i]) return i;

    return -1;
}


int binary_search(int number, int* a, int low, int high){
    int mid = (low+high)/2;
   
    if(low > high) return -1;
    
    if(a[mid] == number)
        return mid;
    else if(number < a[mid])
        return binary_search(number, a, low, mid - 1);
    else 
        return binary_search(number, a, mid + 1, high);
}
