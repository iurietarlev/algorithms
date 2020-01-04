#include<iostream>
#include"sorting_algos.h"
using namespace std;

/*-----------  SELECTION SORTING ALGORITHM --------- */
void selection_sort(int list[], int length){
	if(length <= 1)
		return;

	int min_val = list[0];
    int min_val_index;

    for(int i = 0; i < length; i++){
       min_val = min(min_val, list[i]);
       if(min_val == list[i])
           min_val_index = i;
    }

	//change places of min val and first item	
    int temp = *list;
    *list = min_val; 
    *(list+min_val_index) = temp; 
     
    selection_sort(list+1, length - 1);
}
/*----------- BUBBLE SORTING ALGORITHM --------- */
void bubble_sort(int * list, int length){
	for(int j = 0; j < length; j++){
		for(int i = 0; i < length - 1; i++){
			if(min(list[i], list[i+1]) == list[i+1]){
				int temp = list[i];
				list[i] = list[i+1];
				list[i+1] = temp;
			}
		}
		length--;
	}
}

/*----------- INSERTION SORTING ALGORITHM --------- */
void insertion_sort(int * array, int length){
    for(int i = 1; i < length; i++){
        int key = array[i];
        int j = i - 1;
        while(j >= 0 && key < array[j]){
            array[j+1] = array[j];
            j = j - 1;
        } 
        array[j+1] = key;
    }
}

/*----------- MERGE SORTING ALGORITHM --------- */
void merge_sort(int* a, int low, int high){
    int mid;
    if(low < high)
    {
        //split the data in two halves
        mid = (low+high)/2;
        
        merge_sort(a, low, mid);
        merge_sort(a, mid+1, high);

        merge(a, low, high, mid);
    }
}

void merge(int* a, int low, int high, int mid){
    int i, j, k, temp[high-low+1];
    i = low;
    k = 0;
    j = mid+1;

    //merge the two parts into temp[]
    while(i <= mid && j <= high){
        if(a[i] < a[j]){
            temp[k] = a[i];
            k++; i++;
        }
        else{
            temp[k] = a[j];
            k++; j++;
        }
    }

    //insert remaining vals from i to mid into temp[]
    while(i <= mid){
        temp[k] = a[i];
        k++; i++;
    }

    //insert remainings vals from j to high into temp[]
    while(j <= high){
        temp[k] = a[j];
        k++; j++;
    }

    //assign sorted data stored in temp[] to a[]
    for(int i = low; i <= high; i++){
        a[i] = temp[i-low];
    }
}


/* --------- HELPER FUNCTIONS ---------- */

// prints all elements in an integer array
void print_int_list(int list[], int length){
    for(int i = 0; i < length; i++){
        cout << *(list+i) << "  ";
	}
	cout << endl;
}

//copies elements of one array over to another one
void copy_int_list(int* list, int length, int* list_copy){
	for(int i = 0; i < length; i++)
		list_copy[i] = list[i];
}
