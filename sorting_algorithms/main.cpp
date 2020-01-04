#include"sorting_algos.h"
#include<iostream>

using namespace std;

int main(void){
    int list[] = {13, 1, 5, 100, 34, 50, 80};
    int length = sizeof(list)/sizeof(list[0]);

    int * list_copy1 = new int[length];
    copy_int_list(list, length, list_copy1);

    int * list_copy2 = new int[length];
    copy_int_list(list, length, list_copy2);

    int * list_copy3 = new int[length];
    copy_int_list(list, length, list_copy3);

    // Selection Sort 

    cout << "Original List: " << endl;
    print_int_list(list, length);
    
    selection_sort(list, length);
    
    cout << "Selection sort: " << endl;
    print_int_list(list, length);
    cout << endl; 

    //Bubble Sort
    cout << "Original List: " << endl;
    print_int_list(list_copy1, length);
    
    bubble_sort(list_copy1, length);
    
    cout << "Bubble sort:" << endl;
    print_int_list(list_copy1, length);
    cout << endl;
    delete[] list_copy1;

    //Insertion Sort
    cout << "Original List: " << endl;
    print_int_list(list_copy2, length);
    
    insertion_sort(list_copy2, length);

    cout << "Insertion sort:" << endl;
    print_int_list(list_copy2, length);
    cout << endl;
    delete[] list_copy2;

    //Merge Sort
    cout << "Original List: " << endl;
    print_int_list(list_copy3, length);
    
    merge_sort(list_copy3, 0, length-1);

    cout << "Merge sort:" << endl;
    print_int_list(list_copy3, length);
    cout << endl;
    delete[] list_copy3;
}
