#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <iostream>
    using std::cout;
    using std::cin;
    using std::endl;
#include <cstdlib>
#include <vector>
    using std::vector;

/*void swap(int a, int b){
    vector<int> temp = a;
    a = b;
    b = temp;
}*/

int partition(vector<int>& arr, int low, int high, int& count){
    int pivot = arr[high];      //pivot point last index as defined by project

    int i = (low - 1);

    for(int j = low; j <= high - 1; j++){
        count++;//count for loop
        count++;//for if statement
        if (arr[j] <= pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap (arr[i + 1],arr[high]);
    return (i + 1);
}

void quicksort(vector<int>& arr,int low, int high, int& count){
    if(low < high){
        count++;
        int part = partition(arr,low,high,count);

        quicksort(arr, low, part - 1, count);
        quicksort(arr, part + 1, high, count);
    }
}

int randpart(vector<int>& arr, int low, int high, int& count){
    srand(time(NULL));
    int randNum = rand()%(high-low + 1) + low;
    int pivot = arr[randNum];      //pivot point random index as defined by project
    int k = (low - 1);
    for(int i = low; i <= high - 1; i++){
        count++;//increment for loop
        count++;//increment for if statement
        if(arr[i] <= pivot){
            k++;
            swap(arr[k], arr[i]);
        }
    }
    swap(arr[k+1], arr[high]);
    return(k + 1);
}

void randomquicksort(vector<int>& arr, int low, int high, int& count){
    if(low < high){
        count++;
        int x = randpart(arr,low,high,count);

        randomquicksort(arr, low, x - 1,count);
        randomquicksort(arr, x + 1, high,count);
    }
}

#endif
